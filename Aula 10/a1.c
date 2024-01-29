/*Faça um programa que receba e imprima um vetor com o seu nome (nome completo) e o total
de letras que ele possui.*/
#include <stdio.h>
#include <string.h>

int main (){
    char nome[50];
    char sobrenome[50];
    int tamanho_nome;
    int tamanho_sobre;


    printf("Digite nome: ");
    scanf ("%s",nome);
    printf("Digite sobrenome: ");
    scanf ("%s",sobrenome);

    tamanho_nome = strlen (nome);
    tamanho_sobre = strlen (sobrenome);
    tamanho_nome = tamanho_nome + tamanho_sobre + 1;

    strncat (nome, " ", tamanho_nome);
    strncat (nome, sobrenome, tamanho_nome);


    printf("%s \n", nome);
    printf ("%d \n", tamanho_nome);
    
    return 0;
}