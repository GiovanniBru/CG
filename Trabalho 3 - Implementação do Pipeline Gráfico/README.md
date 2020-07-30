<h1> Implementação do Pipeline Gráfico </h1>
<p><b>Alunos:</b> </p>
<p>&nbsp;&nbsp;&nbsp; Giovanni Bruno Travassos de Carvalho - 11506849</p>
<p>&nbsp;&nbsp;&nbsp;	Frederico Leal Montenegro - 20170143498</p>
<p><b>Professor:</b>&nbsp;&nbsp; Dr. Christian Azambuja Pagot</p>
<p><b>UFPB - 2019.4</b></p>

<h2> Sumário </h2> 
<ol>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico#introdu%C3%A7%C3%A3o">Introdução</a></li>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico#atividade-1---escala">Escala</a></li>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico#atividade-2---transla%C3%A7%C3%A3o">Translação</a></li>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico#atividade-3---proje%C3%A7%C3%A3o-perspectiva">Projeção Perspectiva</a></li>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico#atividade-4---posi%C3%A7%C3%A3o-da-c%C3%A2mera">Posição da Câmera</a></li>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico#atividade-5---transforma%C3%A7%C3%B5es-livres">Transformações Livres</a></li>
	<li><a href="https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/README.md#problemas-encontrados">Problemas Encontrados</a></li>
	<li><a href="https://github.com/GiovanniBru/CG/tree/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico#refer%C3%AAncias">Referências</a></li>
</ol>

<h2>Introdução</h2>
<p>O objetivo desse trabalho foi de nos familiarizarmos com a estrutura do pipeline gráfico através da implementação de transformações geométricas que o compõem. Esta implementação foi feita com auxílio da biblioteca <b>glm</b> e sua execução ocorreu nos <i>shaders</i> do OpenGL.</p>
<p>A atividade consistiu em alterar, no programa template disponibilizado pelo professor, os conteúdos das matrizes <i>Mmodel, Mview e Mprojection</i> de forma que o programa gere imagens especificadas.</p>

<h2>Atividade 1 - Escala</h2>
<p> A primeira alteração feita foi na matriz <i>Model</i>, e teve como objetivo mudar a escala dos triângulos que aparecem na tela. A matriz <i>Model</i> é utilizada na transição do espaço do objeto para o espaço do universo. A matriz <i>Model</i> usada como base e o resultado esperado pelo professor são:</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/model-original.jpeg"></p>
<p align="center">Figura 1 - Matriz Model Original</p>

<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ1-prof.PNG"></p>
<p align="center">Figura 2 - Resultado esperado </p>

<p>Foi aplicado uma matriz de transformação 4x1, com os valores (x, y, z, w) sendo (1/3, 3/2, 1, 1), respectivamente, assim obtivemos a seguinte matriz resultante e a imagem de saída:</p> 
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ1-matriz.PNG"></p>
<p align="center">Figura 3 - Matriz resultante</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ1-resultado.PNG"></p>
<p align="center">Figura 4 - Resultado obtido</p>

<h2>Atividade 2 - Translação</h2>
<p> A segunda atividade consistiu em transladar os triângulos para direita. A translação pode ser feita de duas formas para obter o resultado esperado: modificando a matriz <i>Model</i>, transladando os objetos; ou modificando a matriz <i>View</i>, transladando a câmera. Porém a questão pede que seja modificada a matriz <i>Model</i>. Na imagem abaixo temos o resultado esperado pelo professor e a matriz <i>Model</i> usada como base para resolução. </p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ2-prof.PNG"></p>
<p align="center">Figura 5 - Resultado esperado </p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/model-original.jpeg"></p>
<p align="center">Figura 6 - Matriz Model Original</p>
<p>Para obter o resultado esperado, foi aplicado na <i>Model</i> uma matriz de transformação mostrada a seguir, retirada do <i>header</i> "matrix_transform.hpp" do <b>glm</b>.  </p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ2-transform.jpg"></p>
<p align="center">Figura 7 - Matriz de transformação</p>
<p>Colocando o fator de transformação na matriz obtida, tivemos o seguinte resultado na matriz e na imagem de saída: </p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ2-matriz.jpg"></p>
<p align="center">Figura 8 - Matriz resultante</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ2-resultado.PNG"></p>
<p align="center">Figura 9 - Resultado obtido</p>

<h2>Atividade 3 - Projeção Perspectiva</h2>
<p> A terceira atividade consistiu em modificar a matriz <i>Projection</i>, que é utilizada na transição do espaço da câmera para o espaço de recorte. A matriz de projeção original e o resultado esperado pelo professor são: </p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/matriz-projection.PNG"></p>
<p align="center">Figura 10 - Matriz de Projeção Original</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ3-prof.PNG"></p>
<p align="center">Figura 11 - Resultado esperado</p>
<p> A matriz de projeção utilizada foi a estudada em sala, mostrada a seguir, onde o valor de <b>d</b> é a distância do centro de projeção até a origem do sistema de coordenadas da câmera. </p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/projection.PNG"></p>
<p align="center">Figura 12 - Matriz de Projeção</p>
<p>Para obter o resultado esperado, colocamos <b>d</b> = 1/2 e aplicamos a matriz de projeção nova. Assim o resultado da matriz e da imagem de saída foram, respectivamente: </p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ3-matriz.jpeg"></p>
<p align="center">Figura 13 - Matriz obtida</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ3-resultado.PNG"></p>
<p align="center">Figura 14 - Resultado obtido para d=1/2</p>
<p>Podemos observar que com o valor de <b>d</b> pequeno, sendo 0,5 no exemplo, obtivemos um efeito em que os objetos mais distântes da câmera ficaram menores e os objetos mais próximos ficaram maiores, pois quanto menor o <b>d</b> maior será a distorção perspectiva e o ângulo de abertura da câmera. </p>  

<h2>Atividade 4 - Posição da Câmera</h2>
<p> Nesta quarta atividade tivemos que modificar a matriz <i>View</i>, que é utilizada na transição do espaço do universo para o espaço da câmera. O exercício teve que ser feito mantendo a distorção perspectiva obtida na matriz de projeção da Atividade 3.    </p>
<p> Para realização desse exercício, foi necessário definir os vetores da base do espaço da câmera, considerando os dados fornecidos na questão: Posição da câmera = (-1/10, 1/10, 1/4); vetor <i>UP</i> da câmera = (0,1,0); ponto para o qual a câmera aponta = (0,0,0). </p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ4-prof.PNG"></p>
<p align="center">Figura 15 - Resultado esperado</p>
<p> Após a construção dos vetores de base, é necessário construir a matriz <b>B</b> da base da câmera e invertê-la, calculando sua transposta. Em seguida, construir a matriz <b>T</b> que translada a base da câmera, fazendo sua origem coincidir com a do espaço do universo. A nova matriz <i>View</i> será o produto das matrizes <b>B</b> transposta e <b>T</b>, para obter o resultado final esperado devemos aplica-la nos vértices do triângulo.</p> 
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ4-code.jpeg"></p>
<p align="center">Figura 16 - Código da Matriz <i>View</i></p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ4-resultado.jpeg"></p>
<p align="center">Figura 17 - Resultado obtido</p>
	
<h2>Atividade 5 - Transformações Livres</h2>
<p>A última atividade foi livre, onde podemos transformar as matriz <i>Model</i>, <i>View</i> e <i>Projection</i> da maneira que quisessemos, sem repetir implementações feitas anteriormente.  </p> 
<p><b>Cor:</b> Inicialmente fizemos uma mudança na cor dos triângulos, deixado o mais distânte em um tom alaranjado e o mais próximo verde.</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ5-cores.jpeg"></p>	
<p align="center">Figura 18 - Código da cor dos triângulos</p>
<p><b>Model:</b> A modificação feita na matriz <i>Model</i> foi de aumentar o X em 50% (1.5f) fazendo a imagem ficar mais larga, e diminuir o Y em 20% (0.8f) fazendo a imagem ficar mais achatada. </p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ5-model.jpeg"></p>
<p align="center">Figura 19 - Matriz <i>Model</i> </p>
<p><b>View:</b> Na matriz <i>View</i> foi acrescido 0.1 em X, levando a um pouco mais pra direita, e 0,6 em Y, levando a imagem pra cima.</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ5-view.jpeg"></p>
<p align="center">Figura 20 - Matriz <i>View</i></p>
<p><b>Projection:</b> Na matriz <i>Projection</i> usamos o <b>D</b>=1/3 para aumentar a distorção perspectiva,  e obtivemos a seguinte matriz:</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ5-projection.jpeg"></p>
<p align="center">Figura 21 - Matriz <i>Projection</i></p>
<p>Por fim a imagem obtida com essas quatro modificações foi:</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/ativ5-resultado.jpeg"></p>
<p align="center">Figura 22 - Imagem resultante</p>

<h2>Problemas Encontrados</h2>
<p><b>Ubuntu:</b> Na execução feita no Ubuntu surgiu dois erros. O primeiro foi no acesso aos módulos do <b>glm</b>, e para resolvê-lo tive que mudar a maneira que importo as bibliotecas, como mostrado na Figura 23. O segundo foi na execução do código, ao executar o <i>make</i> o código compilava porém não aparecia a imagem na tela, para resolver isso tive que escrever o comando mostrado na Figura 24.</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/alteracao-include.jpeg"></p>
<p align="center">Figura 23 - Alteração no Header</p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/exportmesa.PNG"></p>
<p align="center">Figura 24 - Exportação do OpenGL 3.3</p>
<p><b>Windows:</b> A execução no Windows foi por meio do VSCode, nele tivemos que mudar a chamada das bibliotecas, igual ao Ubuntu. Também foi adicionado a função <i>pragma</i> para ignorar a notificação de segurança.  </p>
<p align="center"><img src = "https://github.com/GiovanniBru/CG/blob/master/Trabalho%203%20-%20Implementa%C3%A7%C3%A3o%20do%20Pipeline%20Gr%C3%A1fico/Imagens/pramga.jpg"></p>
<p align="center">Figura 25 - Função Pragma </p>

<h2>Referências</h2>
<li><a href="https://glm.g-truc.net/0.9.9/index.html">GLM</a></li>
<li><a href="http://www.opengl-tutorial.org/beginners-tutorials/tutorial-3-matrices/">OpenGL Tutorial</a></li>


