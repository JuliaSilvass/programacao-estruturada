/*Faça um programa que receba um vetor com 10 posições. Em seguida mostre o
maior e o menor elemento do vetor.*/
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int main (){
    int v [10], aux;

    srand(time(NULL));

    for (int i = 0; i < 10; i++){
        v[i] = rand () % 99;
        printf ("%d \t", v[i]);
    }

    printf("\n");

    for (int i = 0; i < 10 - 1; i++){
        for (int j = 0; j < 10 - i - 1; j++){
            if (v[j] > v [j+1]){
                aux =  v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    printf ("Menor elemento do vetor: %d \n", v[0]);
    printf ("Marior elemento do vetor: %d \n", v[9]);
    
    return 0;
}