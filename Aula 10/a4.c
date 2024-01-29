/*Faça um programa que receba uma string. Esta deverá ser passada para uma função que
conte a quantidade de letras desta string (simulando a função strlen). Lembre-se que uma string
em C termina com \0.*/

#include <stdio.h>
#include <string.h>

void meustr (char vetor[]){
    int i = 0;

    while (vetor[i] != '\0'){
        i++;
    }
    i = i-1;

    printf("O tamanho é: %d", i);
}

int main (){
    char string [50];

    printf("Digite algo: ");
    fgets (string, 50, stdin);

    meustr (string);    

}