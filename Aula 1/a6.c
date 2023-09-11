/*Faça um programa em C que receba 2 valores. O programa deve fazer o seguinte:
• Caso o primeiro valor seja par mostre a sequência do primeiro até o segundo valor
(somente números pares);
• Caso o primeiro valor seja impar mostre a sequência do primeiro até o segundo valor
(somente números impares).*/
#include <stdio.h>
int main (){
    int a, b; 

    printf ("digite dois valores: ");
    scanf ("%d %d", &a, &b);

    if (a%2 == 0){
        //PAR 
        for (int i = a; i <= b; i++){
            if (i%2 == 0){
            printf("%d ", i);
            }
        }

    } else {
        //IMPAR 
        for (int i = a; i <=b; i++){
            if (i % 2 != 0){
                printf ("%d ", i);
            }
        }
    }
    printf ("\n");
}