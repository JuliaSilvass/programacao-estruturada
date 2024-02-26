/*Escreva um programa em C Verifique se o valor é palíndromo. Um número é
palíndromo (ou capicua) é aquele que é igual quando lido nos dois sentidos.
Palíndromo: 3113
Não palíndromo: 4115
*/
#include <stdio.h>

int main(){
    int num = 0, aux[4];

    printf("Digite um número de até 4 digitos");
    scanf("%d", &num); 

    if (num < 9999 ){
        aux[0] = num/1000;
        aux[1] = (num/100)%10;
        aux[2] = (num/10)%10;
        aux[3] = num%10;
    } else {
        printf("Utrapassou a quatidade de dígitos.");
    }

    if (aux[0] == aux[3] && aux[1] == aux[2]){
        printf("É palíndromo!");
    } else {
        printf ("Não é palíndromo!");
    }
    return 0;
}