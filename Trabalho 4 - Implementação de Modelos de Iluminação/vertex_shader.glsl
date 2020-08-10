#version 330 core

layout (location = 0) in vec3 obj_spc_vertex_pos;
layout (location = 1) in vec3 obj_spc_N;
layout (location = 2) in vec3 k_d;

uniform mat4 model_mat;
uniform mat4 view_mat;
uniform mat4 proj_mat;

out vec3 I; 

void main() {
    vec3 cam_pos = vec3(0.0f, 0.0f, 1.5f);

    vec3 I_a = vec3(0.2f, 0.2f, 0.2f);
    vec3 k_a = vec3(0.0f, 0.0f, 1.0f);	
    vec3 k_s = vec3(1.0f, 1.0f, 1.0f);	
    vec3 I_p_pos = vec3(-2.0f, 2.0f, 1.5f);
    vec3 I_p = vec3(0.8f, 0.8f, 0.8f);

	vec3 k_d = vec3(0.0f,0.0f,0.8f); // Coeficiente de Reflectância Difusa 

	// Fórmulas dos vetores N e L:
	vec3 L = normalize(I_p_pos - ( model_mat * vec4(obj_spc_vertex_pos, 1.0)) .xyz);
	vec3 N = normalize(mat3( transpose(inverse(model_mat))) * obj_spc_N); 
	
	// Questão 1 - Modelo de Reflexão Difuso 
	float teta = dot(L,N); // Teta como produto escalar entre L e N 
	I = I_a * k_a + I_p * k_d * teta; 
	
	// Questão 2 - Modelo de Reflexão Especular (Phong)
	float teta = max(dot(L,N), 0.0f);
	// Criando vetores auxiliares X e Y para calcular Alpha 
	vec3 X = - reflect(L,N);
	vec3 Y = normalize(cam_pos - (model_mat * vec4(obj_spc_vertex_pos, 1.0)) .xyz);
	// Fazendo Alpha ser o produto escalar entre X e Y 
	float aux = max(dot(X,Y), 0.0f);
	float alpha = (pow(aux,64)); // elevando alpha a 64
	I = I_a * k_a + I_p *(k_d * teta + k_s * alpha);
	
	
     //I = I_a * k_a;

    gl_Position = proj_mat * view_mat * model_mat * vec4(obj_spc_vertex_pos, 1.0);
}
