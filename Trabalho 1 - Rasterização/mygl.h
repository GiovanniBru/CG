#ifndef MYGL_H
#define MYGL_H

#include "core.h"
#include "frame_buffer.h"
#include <math.h>

typedef struct Pixel{
	int x;
	int y;
	
	double red;
	double green;
	double blue;
	double alpha;
}Pixel;

// Declaração da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void);

void PutPixel();

//void DrawLine();

//void DrawTriangle();

#endif  // MYGL_H
