/*
Escreva um programa em “C” que simule a jogada de dois dados. O programa deve usar um rand para cada dado. A soma dos dois valores deve ser calculada. Como cada dado pode 
representar um valor inteiro de 1 a 6, a soma dos dois variará de 2 a 12, sendo a soma 7 a mais frequente e a 2 e 12 as somas menos frequentes. A
tabela abaixo mostra as 36 combinações. O programa deve rolar os dados 40.000 vezes. Armazene o resultado em um array 6x6, ou seja, caso o os dados rolados
sejam 1 e 1, adicione 1 ao Índice 0,0. Armazene a soma também dos dados em um vetor de 12 posições. Após todas as jogadas mostre o array e o vetor com a
quantidade de vezes de cada combinação.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 6


void sorteio(int *dado1, int *dado2);
int soma (int dado1, int dado2);

int main (){

    srand(time(NULL));
    int dado1, dado2;
    int matriz [6][6] = {0};

    for (int k = 0; k < 40000; k++){
        sorteio(&dado1, &dado2);    
        matriz[dado1 - 1][dado2 - 1] = soma(dado1, dado2);    
        }

    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf ("%d \t", matriz[i][j]);
        }
        printf ("\n");    
    }

    return 0;
}

void sorteio(int *dado1, int *dado2){
    *dado1 = (rand() % TAM) + 1;  
    *dado2 = (rand() % TAM) + 1;
}

int soma(int dado1, int dado2){
    return dado1 + dado2; 
}