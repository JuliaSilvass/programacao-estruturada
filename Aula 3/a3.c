/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Após mostre os valores lidos na ordem inversa.*/

#include <stdio.h>

int main (){
    int num = 0;
    int vetor [10];

    for (int i = 0; i < 10; i++){
        //lê os 10 números
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);

        //armazera no vetor
        vetor [i] = num;
    }

    //printa na ordem inversa
    for (int i = 9; i >= 0; i--){
        printf ("%d \t", vetor[i]);
    }

    return 0;
}