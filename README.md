Primeira tarefa:
=

Definir um método diferente do apresentado em 'main.cpp', que tenha menor custo computacional e que possibilite encontrar o maior e menor número em nosso vetor com 'n' elementos.

Inicialmente: custo computacional -> f(n) = 2(n − 1)

* **Tentativas para encontrar melhores resultados:**

[x] ~~Busca dos elementos a partir de n / 2 (descartado nos momentos inicias visto que teria maior consumo computacional devido a 2 laços de repetição com N / 2 elementos, porém com 4 casos a serem analisados)~~

[x] ~~V1 - Ordenar o vetor (+ consumo computacional {n^2} )~~

[✓] V2 - Utilizar um laço de repetição com if & else, semelhante ao arquivo original 'main.cpp', porém analisando o mínimo e máximo com apenas um if (- consumo computacional { estimando -> **f(n) = n - 1 < 'mainV2' < f(n) = 2(n - 1)**} )

* **Sobre o resultado**

Utilizando antes 2 if's, tínhamos uma dupla análise para cada posição no vetor de 'n' elementos, sendo uma dessas análises para o maior número e outra para o menor e que eram realizadas sempre durante todo o loop. Isso nos trazia a uma função f(n) = 2(n - 1). Agora em mainV2, utilizando 1 if e 1 else, a análise feita é reduzida de forma em que só é realizada uma segunda verificação em caso de não correspondência ao if inicial. Dessa forma, há uma tendência em diminuir o custo computacional visto que muitas vezes não passaremos por uma segunda verificação do vetor, que antes era necessária. Assim, temos um custo computacional sempre menor que f(n) = 2(n - 1) e maior que f(n) = n - 1 e por isso podemos considerar como parâmetro uma função f(n) = 1.5(n - 1) para estimá-lo. Por fim, através do 'mainV2', obtivemos um resultado com custo computacional inferior e uma leve melhoria em relação ao problema inicial.
