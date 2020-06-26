#include "mygl.h"
#include <stdlib.h>

void PutPixel(Pixel p){
	if(p.x>IMAGE_WIDTH || p.x<0 || p.y>IMAGE_HEIGHT || p.y<0) return; // Verificando se os pontos dentro do tamanho da imagem
	
	int pos = p.x * 4 + p.y * 4 * IMAGE_WIDTH;
	
	fb_ptr[pos] = p.red;
	fb_ptr[pos+1] = p.green;
	fb_ptr[pos+2] = p.blue;
	fb_ptr[pos+3] = p.alpha;

}

// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void) {   
	
	Pixel p1 = {100, 30, 255, 0, 0, 255}; // Red
	Pixel p2 = {150, 40, 0, 255, 0, 255}; // Green
	Pixel p3 = {200, 50, 0, 0, 255, 255}; // Blue 
	Pixel p4 = {250, 60, 255, 255, 255, 255}; // White
	Pixel p5 = {300, 70, 255, 255, 0, 255}; // Yellow
	/* Teste com a função PutPixel*/
	PutPixel(p1);
	PutPixel(p2);
	PutPixel(p3);
	PutPixel(p4);
	PutPixel(p5);

	//DrawLine();
   
	//DrawTriangle();
   }
