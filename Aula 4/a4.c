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


void sorteio(int *dado1, int *dado2);
int soma (int dado1, int dado2);

int main (){

    int dado1, dado2;
    int *pdado1, *pdado2;
    pdado1 = &dado1;
    pdado2 = &dado2;

    sorteio(pdado1, pdado2);
    printf("dado 1: %d - dado 2: %d \n", dado1, dado2);
    
    int somaR = soma(dado1, dado2);
    printf ("soma: %d \n", somaR);

    return 0;
}

void sorteio(int *dado1, int *dado2){
    srand(time(NULL));
    *dado1 = (rand() % 6) + 1;  
    *dado2 = (rand() % 6) + 1;
}

int soma(int dado1, int dado2){
    int soma = dado1 + dado2;

    return soma; 
}