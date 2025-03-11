/*Dado uma matriz 5x5 fazer um programa que:
- Calcular a soma de todas as linhas e a soma das duas diagonais da matriz.
- Deve realizar a soma tanto horizontais como diagonais por laços. (for).
Horizontais (soma de todas as linhas da tabela)
Diagonais (0,0 1,1 2,2 3,3 4,4 e 0,4 1,3 2,2 3,1 4,0)

A função principal deverá mostrar os resultados.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int main (){
    
    int matriz [TAM][TAM];
    int soma;

    srand(time(NULL));

    // preenche matriz
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    // print dos valores da matriz
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("Matriz: %2d ", matriz[i][j]); 
        }   
        printf("\n");
    }

    //soma das linhas horizontais
    for (int i = 0; i < 5; i++){
        soma = 0;
        for (int j = 0; j < 5; j++){
            soma = matriz [i][j] + soma;  
        }
            printf("A soma da %2d linha e: %2d \n",i , soma);   
    }

    //soma das diagonais
    soma = 0;
    for (int i = 0; i < 5; i++){
        soma = matriz [i][i] + soma;
    }
    printf ("A soma da primeira diagonal: %2d \n", soma);
    
    soma = 0; 
    int aux = 4;
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if (aux == j){
                soma = soma + matriz [i][j];
            }
        }
        aux =  aux - 1; 
    }
    printf ("A soma da segunda diagonal: %2d \n", soma);
    
}