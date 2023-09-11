/*Chico tem 1,70m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3
centímetros por ano. Faça um programa em C que calcule e imprima quantos anos serão
necessários para que Juca seja maior que Chico.*/
#include <stdio.h> 
int main(){
    double c = 1.70; 
    double j = 1.10; 
    int a = 0;

    while (j < c) {
        c = c + 0.02;
        j = j + 0.03;
        a++;
    }

    printf("Leva %d anos \n", a);
}
