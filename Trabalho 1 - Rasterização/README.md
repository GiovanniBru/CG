<h1>Trabalho Prático 1</h1>
Alunos: 
	Giovanni Bruno Travassos de Carvalho - 11506849
	Frederico Leal Montenegro - 20170143498
Professor: 
	Dr. Christian Azambuja Pagot
**UFPB - 2019.4**

<h2>Sumário</h2>
<ol>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%201%20-%20Rasteriza%C3%A7%C3%A3o#1putpixel">Função PutPixel</a></li>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%201%20-%20Rasteriza%C3%A7%C3%A3o#2drawline">Função DrawLine</a></li>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%201%20-%20Rasteriza%C3%A7%C3%A3o#3drawtriangle">Função DrawTriangle</a></li>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%201%20-%20Rasteriza%C3%A7%C3%A3o#4dificuldades">Dificuldades</a></li>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%201%20-%20Rasteriza%C3%A7%C3%A3o#5refer%C3%AAncias">Referências</a></li>
</ol>

<h2>Rasterização</h2> 
O trabalho prático tem como objetivo desenvolver alguns algoritmos fundamentais utilizados em Computação Gráfica, como rasterização de pontos e linhas. Foi disponibilizado pelo professor, um [framework](https://github.com/capagot/icg/tree/master/mygl_framwork) que simula o acesso direto à memória de vídeo. 
Foram implementadas 3 funções baseadas no algoritmo de **Bresenham**, para rasterização de pontos, linhas e para criação de um triângulo. 

<h3>1.PutPixel()</h3>
A primeira função implementada foi a PutPixel, ela rasteriza um ponto na memória de vídeo recebendo como parâmetros as coordenadas (x,y) do pixel e sua cor (RGBA).
Para demonstrar sua implementação, deixamos as outras funções do código comentadas e rodamos apenas com o PutPixel. As coordenadas e cores escolhidas estão demonstradas nesse trecho de código e o resultado está abaixo: 
>Pixel p1 = {100, 30, 255, 0, 0, 255}; // Red 
>Pixel p2 = {150, 40, 0, 255, 0, 255}; // Green
>Pixel p3 = {200, 50, 0, 0, 255, 255}; // Blue 
>Pixel p4 = {250, 60, 255, 255, 255, 255}; // White
>Pixel p5 = {300, 70, 255, 255, 0, 255}; // Yellow
<img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%201%20-%20Rasteriza%C3%A7%C3%A3o/imagens/PutPixel.png">

<h3>2.DrawLine()</h3>
Esta função rasteriza uma linha reta na tela, recebendo como parâmetros de entrada as coordenadas dos vértices inicial e final e suas cores. As cores dos pixels ao longo da linha rasterizada são obtidas por meio de **interpolação linear** das cores nos vértices. 

<h3>3.DrawTriangle()</h3>
Por último foi implementado a função DrawTriangle, ela desenha as arestas de um triângulo na tela, recebendo como parâmetro as posições dos três vértices e suas cores. 
A implementação dessa função foi bem simples, apenas definimos três pontos que seriam as arestas e chamamos a função DrawLine de forma que esses pontos se juntem para formar o triângulo. 

<h3>4.Dificuldades</h3>

<h3>5.Referências</h3>
* Anotações de aula;
* [Rasterização por João Manuel Brisson Lopes](disciplinas.ist.utl.pt/leic-cg/textos/livro/Rasterizacao.pdf)
* [Primitivas Gráficas por Prof. Jorge Cavalcanti (UNIVASF)](univasf.edu.br/~jorge.cavalcanti/comput_graf04_prim_graficas2.pdf)

