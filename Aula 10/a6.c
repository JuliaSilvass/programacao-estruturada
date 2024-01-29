/*Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 no valor ASCII de
cada caractere da palavra. Imprima a string resultante.*/
#include <stdio.h>
#include <string.h>
int main(){
    char palavra [50];
    int i = 0, tamp = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);

    tamp = strlen (palavra);
    while (i != tamp){
        palavra[i]++;
        i++;
    }

    puts(palavra);
    
    return 0;
}