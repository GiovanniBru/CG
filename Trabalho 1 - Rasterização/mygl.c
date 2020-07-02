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

void DrawLine(Pixel inicial, Pixel final){
	int x0 = inicial.x;
	int x1 = final.x;
	int y0 = inicial.y;
	int y1 = final.y;
	int dx = abs(x1 - x0);
	int dy = abs(y1 - y0);
	int defDirecao = 0;
	int incliX;
	int incliY;


	if (x1 > x0)
		incliX = 1;
	else
		incliX = -1;

	if (y1 > y0)
		incliY = 1;
	else
		incliY = -1;

	PutPixel(inicial);
	Pixel linha = { inicial.x, inicial.y, inicial.red, inicial.green, inicial.blue, inicial.alpha }; //Pinta a linha se movimentando

	if (dx == 0) {
		if (y1 > y0) {    
			while (linha.y != y1)
			{

				linha.y++;
				PutPixel(linha);

			}
		}
		else{           
			while (linha.y != y1)
			{

				linha.y--;
				PutPixel(linha);

			}
		}

		}
		else if (dy == 0) {
			if (x1 > x0) { 
				while (linha.x != x1)
				{

					linha.x++;
					PutPixel(linha);

				}
			}
			else {         
				while (linha.x != x1)
				{

					linha.x--;
					PutPixel(linha);

				}
			}
		}
		else {
			if (dx >= dy) {

				defDirecao = dx / 2;
				PutPixel(inicial);
				while (linha.x != x1) {
					linha.x += incliX;
					defDirecao = defDirecao - dy;
					if (defDirecao < 0) {
						linha.y += incliY;
						defDirecao += dx;
					}
					PutPixel(linha);
				}

			}
			else {
				defDirecao = dy / 2;
				PutPixel(inicial);
				while (linha.y != y1) {
					linha.y += incliY;
					defDirecao = defDirecao - dx;
					if (defDirecao < 0) {
						linha.x += incliX;
						defDirecao += dy;
					}
					PutPixel(linha);
				}

			}
		}


}

void DrawTriangle(Pixel p1, Pixel p2, Pixel p3) {
	DrawLine(p1, p2);
	DrawLine(p2, p3);
	DrawLine(p3, p1);
}

// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void) {   
		
	Pixel p1 = {60, 30, 255, 0, 0, 255}; // Red
	Pixel p2 = {256, 256, 0, 255, 0, 255}; // Green
	Pixel p3 = {180, 30, 0, 0, 255, 255}; // Blue 
	Pixel p4 = {500, 485, 255, 255, 255, 255}; // White
	Pixel p5 = {295, 350, 255, 255, 0, 255}; // Yellow
	Pixel p6 = {128, 450, 80, 99, 70, 255}; // Random
	
	/*
	//Teste com a função PutPixel
	PutPixel(p1);
	PutPixel(p2);
	PutPixel(p3);
	PutPixel(p4);
	PutPixel(p5);*/

	/* Teste com a função DrawLine*/
	//DrawLine(p1,p2);
	//DrawLine(p3,p4);
	//DrawLine(p5,p6);
   
	DrawTriangle(p1, p2, p3);
	DrawTriangle(p4, p5, p6);

   }
