<h1> Implementação de Modelos de Iluminação </h1>
<p><b>Alunos:</b> </p>
<p>&nbsp;&nbsp;&nbsp; Giovanni Bruno Travassos de Carvalho - 11506849</p>
<p>&nbsp;&nbsp;&nbsp;	Frederico Leal Montenegro - 20170143498</p>
<p><b>Professor:</b>&nbsp;&nbsp; Dr. Christian Azambuja Pagot</p>
<p><b>UFPB - 2019.4</b></p>

<h2>Introdução</h2>
<p> O objetivo desse trabalho foi de nos familiarizar com os modelos de iluminação tradicionalmente utilizados na rasterização: <i>ambiente</i>, <i>difuso</i> e <i>especular</i> (ou <i>Phong</i>). Para isso, implementamos os três modelos alterando o arquivo do <i>vertex shader</i> do OpenGL, do código template disponibilizado pelo professor. Mais informações estão contidas no pdf anexado ao trabalho. </p>
<p>A cena a ser renderizada nesta atividade é composta por uma malha de triângulos que representa o <i>Utah Teapot</i> e uma fonte de luz pontual. O <i>teapot</i> encontra-se centrado na origem enquanto a fonte de luz pontual encontra-se na posição (-2, 2, 1.5). A câmera encontra-se localizada na posição (0, 0, 1.5), com o vetor <i>Up</i>= (0, 1, 0) e a direção = (0, 0, -1). </p>
<p>O código fornecido renderiza o objeto utilizando o modelo de iluminação ambiente, e o seu resultado pode ser observado a seguir:</p> 
<p align="center"><img src = ""></p>
<p align="center">Figura 1 - Modelo de Iluminação Ambiente</p>
<p> A configuração geométrica da cena renderizada na Figura 1 pode ser vista na Figura 2, onde: a cena é representada no Espaço do Universo; o ponto laranja no canto superior esquerdo representa a posição da fonte de luz pontual; pirâmide preta abaixo da imagem representa o volume de visualização da câmera, que se encontra posicionado sobre o eixo Z, no vértice do volume; o triângulo preto acima do volume de visualização representa a direção <i>Up</i> da câmera. O sistema de coordenadas é mão-direita, onde o eixo vermelho representa o eixo X e o verde o eixo Z. 
<p align="center"><img src = ""></p>
<p align="center">Figura 2 - Configuração Geométrica da Cena</p> 

<h2>Exercício 1 - Modelo de Reflexão Difuso</h2> 


<h2>Problemas Encontrados</h2>
<p><b>Ubuntu:</b> Na execução feita no Ubuntu surgiu dois erros. O primeiro foi no acesso aos módulos do <b>glm</b>, e para resolvê-lo tive que mudar a maneira que importo as bibliotecas, como mostrado na Figura 23. O segundo foi na execução do código, ao executar o <i>make</i> o código compilava porém não aparecia a imagem na tela, para resolver isso tive que escrever o comando mostrado na Figura 24.</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/alteracao-include.jpeg"></p>
<p align="center">Figura 23 - Alteração no Header</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/exportmesa.PNG"></p>
<p align="center">Figura 24 - Exportação do OpenGL 3.3</p>
