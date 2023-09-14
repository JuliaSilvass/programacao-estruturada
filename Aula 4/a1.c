/*Faça um programa em C que para preencher uma matriz 5x8 (5 linhas e 8 colunas),
de acordo com a matriz exemplo abaixo.
1 1 1 1 1 1 1 1
2 2 2 2 2 2 2 2
3 3 3 3 3 3 3 3
4 4 4 4 4 4 4 4
5 5 5 5 5 5 5 5
*/
#include <stdio.h>
int main(){
    int m[5][8];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 8; j++){
            m[i][j] = i + 1;
            printf ("%d \t", m[i][j]);
        }
        printf ("\n");
    }

}