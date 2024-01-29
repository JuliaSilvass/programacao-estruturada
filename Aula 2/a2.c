/*Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado
daquele tamanho com asteriscos e espaços em branco. Seu programa deve funcionar para
quadrados com lados de todos os tamanhos entre 1 e 20.
Para lado igual a 5:
* * * * *
*       *
*       *
*       *
* * * * * 
*/
#include <stdio.h>
int main (){
    int lado; 

    printf("digite a tamanho do lado: ");
    scanf("%d", &lado);

    for (int i = 1; i <= lado; i++){
        for (int j = 1; j <= lado; j++){
            if ((i > 1 && i < lado) && (j > 1 && j < lado)){
                printf ("  ");
            } else {
                printf("* ");
            }

        }
        printf ("\n");
    }
    
}