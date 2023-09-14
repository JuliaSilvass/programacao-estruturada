/*Faça um programa em C (baseado no programa 1), que para preencher uma matriz
5x8 (5 linhas e 8 colunas), de acordo com a matriz exemplo abaixo.

1 2 3 4 5 6 7 8
2 3 4 5 6 7 8 9
3 4 5 6 7 8 9 10
4 5 6 7 8 9 10 11
5 6 7 8 9 10 11 12
*/
#include <stdio.h>
int main(){
    int m[5][8];
    int aux = 1;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 8; j++){
            
            m[i][j] = j + aux;
            printf ("%d \t", m[i][j]);
        }
        aux++;
        printf ("\n");
    }

}