/*Crie um programa que implemente o jogo “Bingo de PE”. Nesse jogo, o jogador deve
selecionar a quantidade de números que ele gostaria de apostar (entre 1 e 20), e em seguida,
informar os números escolhidos (valores entre 0 e 100). Após receber a aposta, o computador
sorteia 20 números (entre 0 e 100) e compara os números sorteados com os números
apostados, informando ao apostador a quantidade de acertos e os números que ele acertou.
O seu programa deverá implementar as funções ler_aposta, sorteia_valores e compara_aposta.
A função ler_aposta deve receber como parâmetro a quantidade de números que serão
apostados e um vetor previamente alocado dinamicamente para armazenar a quantidade exata
de números apostados. A função deve pedir para o usuário digitar os números apostados e
armazená-los no vetor, garantindo que somente números dentro do intervalo de 0 a 100 sejam
digitados. A função deve seguir o seguinte protótipo:
void ler_aposta(int *aposta, int n);
A função sorteia_valores deve receber como parâmetro a quantidade de números que serão
sorteados e um vetor previamente alocado dinamicamente para armazenar a quantidade exata
de números sorteados. A função deve sortear aleatoriamente os números (entre 0 e 100) e
armazená-los no vetor. A função deve seguir o seguinte protótipo:
void sorteia_valores(int *sorteio, int n);

A função compara_aposta deve receber como parâmetro o vetor com os números apostados
(aposta), o vetor com os números sorteados (sorteio), juntamente com os seus respectivos
tamanhos (na e ns) e um ponteiro para uma variável inteira (qtdacertos), onde deve ser
armazenada a quantidade de acertos. A função deve retornar o ponteiro para um vetor alocado
dinamicamente contendo os números que o apostador acertou. A função deve seguir o seguinte
protótipo:
int* compara_aposta(int *aposta, int *sorteio, int *qtdacertos, int na, int ns);
Em seguida, crie a função principal do programa utilizado as funções criadas anteriormente
para implementar o jogo “Bingo de PE”. Lembre-se que os vetores aposta, sorteio e acertos
devem ser alocados dinamicamente e a memória alocada deve liberada quando ela não for mais
ser utilizada.*/