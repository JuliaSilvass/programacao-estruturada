/*Escreva um programa em C que leia as medidas dos lados de um triângulo e escreva se ele é:
EQUILÁTERO, ISÓSCELES ou ESCALENO.
Observação:
• Triângulo equilátero: Possui os 3 lados iguais.
• Triângulo isósceles: Possui 2 lados iguais.
• Triângulo escaleno: Possui 3 lados diferentes.*/
#include <stdio.h>
int main (){
    int l1;
    int l2;
    int l3;

    printf ("Digite o primeiro lado do triângulo: ");
    scanf ("%d", &l1);
    printf ("Digite o segundo lado do triângulo: ");
    scanf ("%d", &l2);
    printf ("Digite o terceiro lado do triângulo: ");
    scanf ("%d", &l3);

    if (l1 == l2 && l1 == l3){
        printf ("Triângulo equilátero \n");
    }else if (l1 == l2 || l1 == l3){
        printf ("Triângulo isósceles \n");
    }else {
        printf ("Triângulo escaleno \n");
    }
    return 0;
}