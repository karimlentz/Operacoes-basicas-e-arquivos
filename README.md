# Operacoes-basicas-e-arquivos
Semana 3 - Leitura e escrita de dados em arquivos para operações aritméticas diversas. 

Questão 1: Arquivos - Leitura Básica de Arquivos
Faça um programa que lê um texto de um arquivo e escreve esse texto na saída padrão. Suponha que o texto é uma única palavra ou melhor, que esse texto não possui espaços. O nome do arquivo do onde será lido o texto deverá ser lido da entrada padrão. Suponha que este nome também não possui espaços.
Entrada (entrada padrão):
Nome do arquivo texto (não terá espaços).
Entrada (conteúdo do arquivo texto): uma palavra
Saída (saída padrão): O conteúdo do arquivo (uma palavra).
Exemplo de entrada (entrada padrão): meu-arquivo.txt
Exemplo de entrada (conteúdo do arquivo "meu-arquivo.txt"): Saudacoes!
Exemplo de saídas (saída padrão):Saudacoes!

Questão 2: Arquivos - Escrita Básica em Arquivos
Faça um programa que lê um nome de arquivo e uma palavra qualquer (texto sem espaços) e depois escreve essa palavra num arquivo cujo nome é o nome lido. Use o comportamento padrão de escrita em arquivos: se o arquivo não existe, ele deve ser criado, se já existe, o conteúdo anterior deve ser substituído.
Entradas: 
1. Nome do arquivo de texto que será escrito (não terá espaços). 
2. Uma palavra (texto sem espaços).
Saída (arquivo cujo nome foi lido anteriormente): A palavra lida anteriormente.
Exemplo de entradas:
arquivo_de_texto.txt
AlgumConteudoParaOArquivo
Exemplo de saída (arquivo_de_texto.txt):
AlgumConteudoParaOArquivo

Questão 3: Operações básicas - Distância entre dois Pontos (arquivo)
Faça um programa que receba de um arquivo (entrada.txt) dois pontos e calcule a distância entre eles no plano cartesiano. A distância deverá ser exibida na saída padrão. Sabe-se que dados dois pontos A = (x1,y1) e B = (x2,y2), a distância entre eles é a raiz quadrada da soma das diferenças das coordenadas ao quadrado. 
D^2= (x2 - x1)^2 + (y2 - y1)^2
Cada ponto será representado por dois valores numéricos, representado as coordenadas x e y do ponto, respectivamente. O exemplo a seguir leva ao cálculo da distância entre (-2.1, 4.6) e (3.3,-1.6).
Entrada (conteúdo do arquivo entrada.txt):
1. Número real da coordenada x do primeiro ponto.
2. Número real da coordenada y do primeiro ponto.
3. Número real da coordenada x do segundo ponto.
4. Número real da coordenada y do segundo ponto.
Saída
1. Número real representando a distância entre os pontos.
Exemplo de Entrada (arquivo entrada.txt):
-2.1
4.6
3.3
-1.6
Exemplo de Saída (saída padrão):
8.22192
Exemplo de Entrada (arquivo entrada.txt):
6
2.1
-9.4
-1.3
Exemplo de Saída (saída padrão):
15.77086

Questão 4: Operações básicas - Multiplicação (arquivo)
Faça um programa que receba da entrada padrão um valor inteiro de três dígitos (100 < N < 999). O programa deve calcular e imprimir na saída padrão a soma dos três dígitos e salvar em um arquivo saida.txt (sem acento) o produto entre os três dígitos.
Entrada:
Número inteiro de três dígitos.
Saída (saída padrão):
A soma entre os três dígitos.
Saída (saida.txt):
O produto entre os três dígitos.
Exemplo de Entrada:
919
Exemplo de Saída (saída padrão):
19
Exemplo de Saída (saida.txt):
81
Exemplo de Entrada:
254
Exemplo de Saída (saída padrão):
11
Exemplo de Saída (saida.txt):
40

Questão 5: Operações básicas - Média Ponderada (arquivo)
Faça um programa que leia do arquivo notas.txt três notas, e seus respectivos pesos. O programa deve calcular e imprimir em um arquivo final.txt a média ponderada dos valores informados. Use fixed e setprecision() para informar o resultado com duas casas decimais
Entrada (arquivo notas.txt):
Primeira nota e seu peso (valores inteiros)
Segunda nota e seu peso (valores inteiros)
Terceira nota e seu peso (valores inteiros)
Saída (arquivo final.txt):
Média ponderada dos valores informados (em ponto flutuante, com duas casas decimais)
Exemplo de Entrada (notas.txt):
50 30
60 20
70 50
Exemplo de Saída final.txt):
62.00
Exemplo de Entrada (notas.txt):
50 4
60 5
70 3
Exemplo de Saída final.txt):
59.17

Questão 6: Operações básicas - Média (arquivo)
Faça um programa que leia do arquivo dados.txt oito valores. O programa deve calcular e imprimir em um arquivo media.txt a média aritmética dos valores informados. Use setprecision() para informar o resultado com três casas decimais.
Entrada (arquivo dados.txt):
Oito valores em ponto flutuante, separados por espaço ou quebra de linha
Saída (arquivo media.txt):
Média dos valores informados (em ponto flutuante, com três casas decimais)
Exemplo de Entrada (dados.txt):
50 30 60 20 70 50
13.1 14.3
Exemplo de Saída media.txt):
38.425
Exemplo de Entrada (dados.txt):
50.4
60.5
70.3
1 2 3 4 5
Exemplo de Saída media.txt):
24.525

Questão 7: Operações básicas - Concatena Palavras (arquivo)
Faça um programa que leia duas palavras, cada uma de um arquivo diferente. Os nomes dos arquivos serão informados pelos usuários. O programa deve escrever, em um terceiro arquivo, o conteúdo dos dois primeiro arquivos, separados por um único espaço, sabendo que cada arquivo contém apenas uma única string como conteúdo.
Entrada:
Nome do primeiro arquivo (o arquivo contém uma única palavra como conteúdo)
Nome do segundo arquivo (o arquivo contém uma única palavra como conteúdo)
Nome do terceiro arquivo
Saída (terceiro arquivo):
Texto resultado da impressão do conteúdo dos dois primeiros arquivos, separados por um espaço
Exemplo de Entrada:
arq1.txt
arq2.txt
arq3.txt
Conteúdo de (arq1.txt):
Super
Conteúdo de (arq2.txt):
Algoritmo
Exemplo de Saída (arquivo arq3.txt):
Super Algoritmo
Exemplo de Entrada:
primeiro.txt
segundo.txt
terceiro.txt
Conteúdo de (primeiro.txt):
Vou
Conteúdo de (segundo.txt):
passar!
Exemplo de Saída (arquivo terceiro.txt):
Vou passar!

Questão 8: Operações básicas - Convites para o teatro
(arquivo)
Escreva um programa que leia do arquivo teatro.txt o custo de realização de um espetáculo teatral e o preço do convite desse espetáculo, escritos em linhas diferentes. O programa deve calcular e mostrar a quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado. Esse número de convites deve ser redondo, pois não é possível vender frações do convite. O número de convites também deve ser armazenado em um arquivo chamado convite.txt.
Entrada (arquivo teatro.txt):
1. Número real definindo o custo da realização do espetáculo
teatral, em reais (R$);
2. Número real definindo o preço de cada convite, em reais (R$).
Saída (saída padrão):
1. Número inteiro representando o número de convites necessários para cobrir o custo de realização.
Saída (arquivo convite.txt):
1. Número inteiro representando o número de convites necessários para cobrir o custo de realização.
Exemplo de entrada (conteúdo do arquivo):
5000.00
35.00
Exemplo de saída (na saída padrão e no arquivo convite.txt):
143
Exemplo de Entrada:
3874.65
10.50
Exemplo de saída (na saída padrão e no arquivo convite.txt):
370

Questão 9: Operações básicas - Calculo de potência (arquivo)
Sabe se que, para iluminar de maneira correta os cômodos de uma casa, deve se usar 18W de potência para cada m2 . Faça um programa que receba as duas dimensões de um cômodo (em metros). Seu
programa deverá calcular e escrever no arquivo potencia.txt a área do cômodo (em m2) e a potência de iluminação total que deverá ser utilizada, utilizando uma casa decimal de precisão. Defina em seu programa uma variável constante que deve indicar a potência
necessária para cada m2 . Dica: utilize a biblioteca iomanip, e as funções fixed e setprecision(), para especificar a precisão desejada na saída (uma casa decimal).
Entradas:
1. Dois números reais que denotam as dimensões do cômodo.
Saídas (arquivo potencia.txt):
1. Número real X que indica a área total do cômodo.
2. Número real Y que indica a potência necessária para iluminar o cômodo.
Exemplo de Entrada:
5.3
7.0
Exemplo de Saída (arquivo potencia.txt):
37.1m2
667.8W

Questão 10: Operações básicas - Número de degraus (arquivo)
Cada degrau de uma escada tem uma certa altura. Faça um programa que receba essa altura em centímetros e a altura que o usuário deseja subir na escada em metros, em um arquivo denominado entrada.txt. Calcule e escreva no arquivo degraus.txt quantos degraus o usuário deverá subir para, no mínimo, atingir seu objetivo, sem se preocupar com a altura do usuário. Sugestão: use uma biblioteca matemática para arredondamento.
Entradas (arquivo entrada.txt):
1. Altura dos degraus em centímetros (número real).
2. Altura que se deseja alcançar em metros (número real).
Saídas (arquivo degraus.txt):
1. Número inteiro de degraus necessários para atingir o objetivo.
Exemplo de Entrada (arquivo entrada.txt):
40
2
Exemplo de Saída (arquivo degraus.txt):
5

Questão 11: Operações básicas - Conversão de horas (arquivo)
Faça um programa que receba dois valores, um representando horas e outro representando minutos, calcule e armazene em um arquivo de saída: a) a hora lida (somente o valor relativo às horas) convertida em minutos; b) o total dos minutos, ou seja, os minutos lidos mais a conversão anterior; c) o total dos minutos (conversão anterior) convertidos em segundos.
Entrada:
1. Um número inteiro representando horas.
2. Um número inteiro representando minutos.
Saída (conteúdo do arquivo saida.txt:
1. Conforme especificado nos itens a, b e c do enunciado, na
respectiva ordem.
Exemplo de Entrada:
2
28
Exemplo de Saída (conteúdo do arquivo saida.txt):
120
148
8880
Exemplo de Entrada:
6
3
Exemplo de Saída (conteúdo do arquivo saida.txt):
360
363
21780

Questão 12: Operações Básicas - O peso de Mjölnir (arquivo)
Mjölnir é a arma utilizada pelo Deus do Trovão (Thor). Existe muita discussão a respeito do peso desta arma. Alguns afirmam que ele foi construído a partir de materiais encontrados em uma estrela de nêutrons, outros afirmam que ele foi apenas forjado em uma estrela e foi construído com um material chamado Uru. De qualquer forma é possível estimar o peso do martelo sabendo suas medidas e também o peso por cm3 do material utilizado. Dessa forma faça um programa que ajude os aficionados a resolver a questão assumindo que o martelo tem o formato de um Paralelepípedo e que a fórmula para cálculo do volume é v = altura x largura x profundidade. As informações de entrada devem ser lidas a partir do arquivo entrada.txt
Entradas (a partir do arquivo entrada.txt:
1. Valor real da estimativa da profundidade do Mjölnir em cm.
2. Valor real da estimativa da altura do Mjölnir em cm.
3. Valor real da estimativa da largura do Mjölnir em cm.
4. Valor real da estimativa do peso do cm3 (densidade) do material usado na construção do Mjölnir.
Saídas:
1. Peso do Mjölnir em um valor real.
Exemplo de Entrada (conteúdo do arquivo entrada.txt):
2.0
3.0
5.0
22.5
Exemplo de Saída:
675.0

Questão 13: Operações básicas - Caixa eletrônico (arquivo)
Escreva um programa que, dado o valor inteiro de reais, determine a quantidade de cada tipo de nota necessária para totalizar esse valor, de modo a minimizar a quantidade de cédulas a serem emitidas por um caixa eletrônico. Considere que existem apenas 3 tipos de notas: R$ 100, R$50 e R$10. Por exemplo R$50,00 equivalem a uma única nota de cinquenta Reais. R$180,00 equivalem a uma nota de R$100,00, uma nota de R$ 50 e três notas de R$ 10. A quantidade de cada nota deve ser gravada no arquivo saque.txt.
Entrada:
Valor inteiro representando a quantia a ser sacada.
Saídas (arquivo saque.txt):
Três valores inteiros que indicam o número de cédulas de R$ 100, R$ 50 e R$10 a serem emitidas, respectivamente.
Exemplo de Entrada:
630
Exemplo de Saídas (arquivo saque.txt):
6
0
3
Exemplo de Entrada:
70
Exemplo de Saída (arquivo saque.txt):
0
1
2

Questão 14: Operações básicas - Controle das despesas (arquivo)
Um trabalhador recebeu seu salário mensal e o depositou em sua conta corrente bancária, cujo saldo até então era de R$0,00. Sabendo que após o depósito do salário, esse mesmo trabalhador fez duas compras usando pagamento em débito e agora deseja saber seu saldo atual, faça um programa que receba o valor do salário mensal deste trabalhador, assim como os valores das despesas realizadas. As informações sobre o salário recebido e as duas despesas serão recebidas através do arquivo entrada.txt e seu programa deverá informar qual o saldo atual da conta corrente do trabalhador, considerando que para cada despesa, é cobrado pelo banco uma taxa de 0,38% do valor da despesa.
Entradas (conteúdo do arquivo entrada.txt:
1. Um número real indicando o salário mensal do trabalhador.
2. Dois números reais indicando os valores do primeiro cheque e
do segundo cheque emitidos, respectivamente.
Saídas:
1. Número real que indica o saldo atual da conta do trabalhador após a realização de todas as transações bancárias.
Exemplo de Entrada (conteúdo do arquivo entrada.txt):
3500.00
500.00
375.25
Exemplo de Saída:
2621.42
Exemplo de Entrada (conteúdo do arquivo entrada.txt):
2196.32
709.60
199.00
Exemplo de Saída:
1284.27

Questão 15: Operações básicas - Troco (arquivo)
Faça um programa que receba a partir do arquivo entrada.txt o valor em reais que um cliente dá ao funcionário e o valor total da compra. Calcule o troco que o funcionário deve dar ao cliente em notas de 20, 10, 5, 2 e 1 e armazene a resposta no arquivo de saída saida.txt. A quantidade de notas deve ser a menor possível, ou seja, 6 reais de troco devem ser entregues por meio de uma nota de 5 e uma de 1, ao invés de três notas de 2.
Entradas (conteúdo do arquivo entrada.txt):
1. Valor que o cliente entrega ao funcionário (inteiro),
2. Valor total da compra (inteiro).
Saídas (conteúdo do arquivo saida.txt):
1. Quantidade de notas de 20, 10, 5, 2 e 1 (respectivamente) necessárias para o troco.
Exemplo de entradas (conteúdo do arquivo entrada.txt):
100
43
Exemplo de saídas (conteúdo do arquivo saida.txt):
2
1
1
1
0
Exemplo de Entrada (conteúdo do arquivo entrada.txt):
80
67
Exemplo de Saída (conteúdo do arquivo saida.txt):
0
1
0
1
1

Questão 16: Operações básicas - Lojista (arquivo)
As vendas parceladas se tornaram uma ótima opção para lojistas, que a cada dia criam novas promoções para tentar conquistar novos clientes. Faça um programa em que o lojista possa entrar com o preço de alguma coisa, no arquivo valor.txt e receba as seguintes informações no arquivo opcoes.txt:
1. O valor com 8% de desconto com o pagamento à vista.
2. O valor da prestação para parcelar sem juros em 4x.
3. O valor da prestação com juros, em 10x, com 10% de
acréscimo no valor do produto.
Utilize fixed e setprecision() para garantir que os valores sejam impressos com duas casas decimais.
Entrada (arquivo valor.txt):
1. Número real referente ao preço do produto.
Saídas (arquivo opcoes.txt):
1. O valor referente à 8% de desconto para venda à vista.
2. O valor de uma prestação em 4x.
3. O valor da prestação com juros, em 10x, com 10% de acréscimo no valor do produto.
Exemplo de entrada (arquivo valor.txt):
1100.00
Exemplo de saída (arquivo opcoes.txt):
1012.00
275.00
121.00
Exemplo de Entrada (arquivo valor.txt):
649.95
Exemplo de Saída (arquivo opcoes.txt):
597.95
162.49
71.49

Questão 17: Operações básicas - Calculando Salário (arquivo)
Faça um programa que receba o salário base de um funcionário, calcule e mostre o seu salário a receber, mostrando descontos e adicionais. Você receberá da entrada os seguintes valores: salário base, gratificação e percentual de imposto sobre o salário base. Escreva no arquivo holerite.txt os seguintes dados: valor total bruto, valor do desconto, valor líquido a ser recebido. Utilize fixed e setprecision() para imprimir os valores com duas casas decimais.
Entradas:
1. Valor do salário base do funcionário (float).
2. Valor da gratificação do funcionário (float).
3. Percentual do imposto sobre o salário base do funcionário (float).
Saídas (arquivo holerite.txt):
1. Salário final bruto (salário + gratificação)
2. Valor do desconto com imposto
3. Salário final líquido
Exemplo de Entrada:
920
80
15
Exemplo de Saída (arquivo holerite.txt):
1000.00
150.00
850.00
Exemplo de Entrada:
3210
50
25
Exemplo de Saída (arquivo holerite.txt):
3260.00
815.00
2445.00

Questão 18: Operações básicas - Codificando valores (arquivo)
O cálculo de resto de uma divisão inteira tem uma grande importância na criptografia moderna. Vários dos métodos são baseados em propriedades envolvendo restos de divisão por números primos,
inclusive. Nesta atividade, seu objetivo é implementar um método bastante simples para codificar um valor. Você irá receber um valor, a partir da entrada padrão e, na sequência, ler três números primos em um arquivo de entrada denominado chaves.txt. Na sequência, você irá calcular o resto da divisão do valor inicial por cada um dos valores primos, escrevendo o resultado no arquivo codigo.txt.
Entrada padrão:
1. Um valor inteiro positivo qualquer.
Entrada pelo arquivo chaves.txt:
1. Três números primos.
Saídas (arquivo codigo.txt):
1. Resto da divisão do valor fornecido na entrada padrão por cada um dos números primos informados.
Exemplo de Entrada:
920
Exemplo de Arquivo chaves.txt:
3
5
7
Exemplo de Saída (arquivo codigo.txt):
2
0
3
Exemplo de Entrada:
11234
Exemplo de Arquivo chaves.txt:
7
11
13
Exemplo de Saída (arquivo codigo.txt):
6
3
2

Questão 19: Operações Básicas - Conversão de Milissegundos para Horário (arquivo)
Implemente um programa que receba no arquivo tempo.txt um número que represente o tempo em milissegundos que se passou desde as 00 : 00 : 00 (HORAS : MINUTOS : SEGUNDOS) horas de um dia. O seu programa deve imprimir no arquivo horario.txt a hora representada por este número de milissegundos.
Entrada (arquivo tempo.txt):
1. Número inteiro representando o tempo em milissegundos.
Saída (arquivo horario.txt):
1. Tempo convertido para o formato
"HORAS:MINUTOS:SEGUNDOS", conforme essa formatação (itens separados por dois pontos), em que HORAS e MINUTOS são números inteiros e SEGUNDOS um número em ponto flutuante.
Exemplo de Entrada (arquivo tempo.txt):
3600001
Exemplo de Saída horario.txt:
1:0:0.001
Exemplo de Entrada (arquivo tempo.txt):
8746900
Exemplo de Saída horario.txt:
2:25:46.9

Questão 20: Operações básicas - Loja de tintas (arquivo)
Faça um programa para uma loja de tintas. O programa deverá receber, em um arquivo entrada.txt o tamanho em metros quadrados da área a ser pintada e o valor do galão de tinta. Considere que o rendimento da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros. Feito isso, informe ao usuário, no arquivo saida.txt a quantidade de latas de tinta a serem compradas e o preço total. Dicas: utilize a biblioteca cmath e a função ceil(); utilize a biblioteca iomanip, e as funções fixed e setprecision().
Entradas (arquivo entrada.txt):
1. Uma linha contendo um número inteiro que indica a área em metros quadrados a ser pintada .
2. Uma linha contendo um número em ponto flutuante que indica o valor do galão de tinta.
Saídas (arquivo saida.txt):
1. Uma linha com um inteiro que representa a quantidade de latas de tinta a serem compradas.
2. Uma linha com um valor em ponto flutuante com duas casas decimais que representa o valor a ser pago pela tinta.
Exemplo de Entrada (arquivo entrada.txt):
145
80.0
Exemplo de Saída (arquivo saida.txt):
3
240.00

Questão 21: Operações básicas - Coordenadas geográficas (arquivo)
As coordenadas geográficas expressam de forma exata em graus a posição de qualquer ponto na superfície do globo terrestre. A medida de grau possui duas notações, grau em notação sexagesimal (grau, minuto e segundo) e grau em notação decimal. A notação sexagesimal é obtida a partir da notação decimal da seguinte maneira: O Grau corresponde ao valor da parte inteira da notação decimal. O minuto é obtido com o valor absoluto da parte fracionária da notação decimal multiplicado por 60, pegando somente a parte inteira deste resultado. O segundo é obtido com o valor absoluto da parte fracionária da notação decimal multiplicado por 60, e multiplicando a parte fracionária deste resultado por 60. Faça um programa para calcular os graus, minutos e segundos de um valor inserido pelo usuário na notação de grau em decimal, armazenando o resultado em um arquivo coordenadas.txt.
Entradas:
1. Grau em notação decimal (valor em ponto flutuante)
Saídas (arquivo coordenadas.txt):
1. Grau em notação sexagesimal: grau, minuto, segundo. Os valores exibidos são inteiros, um em cada linha.
Exemplo de Entrada:
48.764169
Exemplo de Saída (arquivo coordenadas.txt):
48
45
51

Questão 22: Operações Básicas - Doces para Namorada (arquivo)
O dia dos namorados está chegando e você quer presentear a sua linda e querida namorada com o que ela mais gosta: doces! E, para variar, ela gosta dos presentes mais caros e menos dos mais baratos.
Tabela de preços dos doces:
1. Caixa de chocolate - R$ 13,50
2. Trufa de chocolate - R$ 2,50
3. Pacotinho de Jujuba - R$ 1,50
4. Drops de hortelã - R$ 1,00
5. Bala de morango - R$ 0,25
Desenvolva um programa para, a partir de uma certa quantia de dinheiro, calcule quantas caixas de chocolate, quantas trufas, quantos pacotinhos de jujuba, quantos drops e quantas balas de morango ela irá ganhar no dia dos namorados. O resultado deve ser armazenado no arquivo doces.txt.
Entradas:
1. A entrada consiste em um linha contendo um número real
(ponto flutuante) que representa a quantidade de dinheiro que
o namorado tem para comprar os doces.
Saídas (arquivo doces.txt:
1. Seu programa deve imprimir no arquivo, um em cada linha: o valor do dinheiro gasto pelo namorado, o número de caixas de chocolate, de trufas, de pacotinhos de jujuba, de drops e de balas de morango. O valor do dinheiro gasto pelo namorado deve ser formatado utilizando duas casas decimais. Para isso, utilize a biblioteca iomanip e as funções fixed e setprecision().
Exemplo de Entrada:
36.25
Exemplo de Saída (arquivo doces.txt):
36.25
2
3
1
0
1
Exemplo de Entrada:
50.00
Exemplo de Saída (arquivo doces.txt):
50.00
3
3
1
0
2
Exemplo de Entrada:
15.60
Exemplo de Saída (arquivo doces.txt):
15.50
1
0
1
0
2

Questão 23: Operações Básicas - Contração de número (arquivo)
Faça um programa que receba como um entrada um número inteiro N de 6 algarismos, tal que 100000 <= N <= 999999, e a partir dele calcule um novo número inteiro M de 5 algarismos. O dado será lido do arquivo entrada.txt e o resultado será gravado no arquivo saida.txt. O valor de M será calculado a partir da divisão inteira dos algarismos de N. O 1º algarismo de M será o resultado da divisão inteira do 1º algarismo de N pelo 2º algarismo de N; o 2º algarismo de M será o resultado da divisão inteira do 2º algarismo de N pelo 3º algarismo de N, e assim sucessivamente. Atente-se ao fato de que, ao final, M será um único número inteiro de cinco algarismos. Obs: considere que o número N não tem nenhum algarismo igual a zeroe que o número M gerado terá sempre 5 algarismos (ou seja, nunca começará com zero).
Entradas (arquivo entrada.txt):
1. Um número inteiro N de seis algarismos.
Saídas (arquivo entrada.txt):
1. Um número inteiro M de cinco algarismos calculado conforme
o enunciado.
Exemplo de Entrada (arquivo entrada.txt):
918273
Exemplo de Saída (arquivo saida.txt):
90402
Exemplo de Entrada (arquivo entrada.txt):
854221
Exemplo de Saída (arquivo saida.txt):
11211

Questão 24: Operações básicas - Custo ao consumidor (arquivo)
O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba, em um arquivo dados.txt, o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e escreva num arquivo custo.txt: a) O valor correspondente ao lucro do distribuidor; b) O valor correspondente aos impostos; c) O preço final do veículo. A saída deve ser formatada utilizando duas casas decimais. Para isso, utilize a biblioteca iomanip e as funções fixed e setprecision().
Entradas (arquivo dados.txt):
1. Preço de fábrica (float).
2. Percentual de lucro do distribuidor (float).
3. Percentual de impostos (float).
Saídas (custo.txt):
1. O valor correspondente ao lucro do distribuidor.
2. O valor correspondente aos impostos.
3. O preço final do veículo.
Exemplo de Entrada (arquivo dados.txt):
25000.00
0.15
0.05
Exemplo de Saída custo.txt:
3750.00
1250.00
30000.00

Questão 25: Operações Básicas - Comerciante Maluco (arquivo)
Ao vender os produtos à prazo, uma determinada loja cobrava 10% de acréscimo no valor do produto. Como os clientes começaram a reclamar, o dono do comércio disse que não cobraria mais acréscimos. Mas os boletos já estavam todos impressos; ele então ordenou aos funcionários que dessem 10% de desconto sobre o valor da prestação na hora que os clientes fizessem o pagamento. Os funcionários discutiram entre si que o dono deveria ter faltado às aulas de matemática na escola, mas quando tentaram argumentar ele não aceitou. Portanto, eles cumpriram a ordem.
Faça um programa que receba no arquivo venda.txt o valor à vista de um produto e o número de prestações (um em cada linha). Calcule e imprima no arquivo cliente.txt: i) o total que um cliente pagaria para a loja antes da reclamação dos clientes; ii) o valor de cada prestação antes da reclamação; iii) o valor atualizado de cada prestação; e iv) o valor total a ser pago pelo cliente. Dicas: utilize a biblioteca cmath e a função ceil(); utilize a biblioteca iomanip, e as funções fixed e setprecision()
Entradas (arquivo venda.txt):
1. Valor à vista do produto (número real).
2. Quantidade de prestações.
Saídas (arquivo cliente.txt):
1. Valor total que o cliente pagaria antes das reclamações.
2. Valor de cada prestação antes da reclamação.
3. Valor atualizado de cada prestação.
4. Valor total que o cliente deverá pagar depois da ordem do
dono.
Exemplo 1:
Exemplo de Entrada (arquivo venda.txt):
1200.0
10
Exemplo de Saída (arquivo cliente.txt):
1320.0
132.0
118.8
1188.0
Exemplo 2:
Exemplo de Entrada (arquivo venda.txt):
1000.0
4
Exemplo de Saída (arquivo cliente.txt):
1100.0
275.0
247.5
990.0
Exemplo 3:
Exemplo de Entrada (arquivo venda.txt):
99.9
2
Exemplo de Saída (arquivo cliente.txt):
109.89
54.95
49.46
98.92
