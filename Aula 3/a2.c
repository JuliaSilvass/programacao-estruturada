/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Após mostre o maior elemento e a sua posição no vetor.*/

#include <stdio.h>

int main (){
    int num = 0, posicao = 0;
    int vetor [10];

    for (int i = 0; i < 10; i++){
        //lê os 10 números
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);

        //armazera no vetor
        vetor [i] = num;
    }
    
    int maior = vetor [0];
    
    //Filtra o maior número
    for (int i = 0; i < 10; i++){
        if (vetor[i] > maior){
            maior = vetor [i];
            posicao = i + 1;
        } 
    }
    

    printf ("Maior elemento do vetor: %d \n", maior);
    printf ("E a posição é : %d \n", posicao);

    return 0;
}