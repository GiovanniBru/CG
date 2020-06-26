#Trabalho Prático 1 
Alunos: 
	Giovanni Bruno Travassos de Carvalho - 11506849
	Frederico Leal Montenegro - 20170143498
Professor: 
	Dr. Christian Azambuja Pagot
**UFPB - 2019.4**

##Rasterização 
O trabalho prático tem como objetivo desenvolver alguns algoritmos fundamentais utilizados em Computação Gráfica, como rasterização de pontos e linhas. Foi disponibilizado pelo professor, um [framework](https://github.com/capagot/icg/tree/master/mygl_framwork) que simula o acesso direto à memória de vídeo. 
Foram implementadas 3 funções baseadas no algoritmo de **Bresenham**, para rasterização de pontos, linhas e para criação de um triângulo. 

###1.PutPixel()
A primeira função implementada foi a PutPixel, ela rasteriza um ponto na memória de vídeo recebendo como parâmetros as coordenadas (x,y) do pixel e sua cor (RGBA).
Para demonstrar sua implementação, deixamos as outras funções do código comentadas e rodamos apenas com o PutPixel. As coordenadas e cores escolhidas estão demonstradas nesse trecho de código e o resultado está abaixo: 
>Pixel p1 = {100, 30, 255, 0, 0, 255}; // Red 
>Pixel p2 = {150, 40, 0, 255, 0, 255}; // Green
>Pixel p3 = {200, 50, 0, 0, 255, 255}; // Blue 
>Pixel p4 = {250, 60, 255, 255, 255, 255}; // White
>Pixel p5 = {300, 70, 255, 255, 0, 255}; // Yellow


###2.DrawLine()
Esta função rasteriza uma linha reta na tela, recebendo como parâmetros de entrada as coordenadas dos vértices inicial e final e suas cores. As cores dos pixels ao longo da linha rasterizada são obtidas por meio de **interpolação linear** das cores nos vértices. 

###3.DrawTriangle()
Por último foi implementado a função DrawTriangle, ela desenha as arestas de um triângulo na tela, recebendo como parâmetro as posições dos três vértices e suas cores. 
A implementação dessa função foi bem simples, apenas definimos três pontos que seriam as arestas e chamamos a função DrawLine de forma que esses pontos se juntem para formar o triângulo. 

###4.Dificuldades 

###5.Referências 
* Anotações de aula;
* [Rasterização por João Manuel Brisson Lopes](disciplinas.ist.utl.pt/leic-cg/textos/livro/Rasterizacao.pdf)
* [Primitivas Gráficas por Prof. Jorge Cavalcanti (UNIVASF)](univasf.edu.br/~jorge.cavalcanti/comput_graf04_prim_graficas2.pdf)

