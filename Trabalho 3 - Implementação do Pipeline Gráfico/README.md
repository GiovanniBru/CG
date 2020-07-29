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
<p> A primeira alteração feita foi na matriz <i>Model</i>, e teve como objetivo mudar a escala dos triângulos que aparecem na tela. A matriz <i>Model</i> é utilizada na transição do espaço do objeto para o espaço do universo, para obter o resultado esperado modificamos os fatores de escala em (x,y,z) para (1/3, 3/2, 1) respectivamente. </p>

<h2>Atividade 2 - Translação</h2>
<p> A segunda atividade consistiu em transladar os triângulos para direita. A alteração novamente foi feita na matriz <i>Model</i> </p>

<h2>Atividade 3 - Projeção Perspectiva</h2>
<p> A terceira atividade consistiu em modificar a matriz <i>Projection</i>, que é utilizada na transição do espaço da câmera para o espaço de recorte. </p>

<h2>Atividade 4 - Posição da Câmera</h2>
<p> Nesta quarta atividade tivemos que modificar a matriz <i>View</i>, que é utilizada na transição do espaço do universo para o espaço da câmera.   </p>

<h2>Atividade 5 - Transformações Livres</h2>
<p>    </p> 

<h2>Problemas Encontrados</h2>

<h2>Referências</h2>

