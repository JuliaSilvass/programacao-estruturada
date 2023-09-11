/*Jogo da velha:

Versão 1: Dois Jogadores
Versão 2: Humano x Computador
*/
#include <stdio.h>
int main (){
    int j1, j2; 
    int tab[3][3];

    // printf("Escolha entre 1 ou 2: \n");
    // scanf ("%d", &j1);
    
    // if(j1 == 1){
    //     j2 = 2;
    // } else {
    //     j2 = 1;
    // }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            tab[i][j] = 0;
            printf ("%d\t", tab[i][j]);
        }
        printf ("\n");
    }
    
    for (int i = 1; i < 3; i++){
        // fazer um if verificando se é impar ou par porque se for impar é vez do jogador um e se for par é do jogador 2
        for (int j = 0; j < 3; j++){
            tab[i][j] = 0;
            printf ("%d\t", tab[i][j]);
        }
        printf ("\n");
    }


}