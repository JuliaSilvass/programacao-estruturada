/*Faça um programa em “C” que receba do usuário um arquivo, e mostre na tela quantas linhas
esse arquivo possui.*/
#include <stdio.h>
#include <string.h>
int main (){
    FILE *aqr;
    char nome[150], ch;
    int linhas = 0;


    
    printf("Digite o nome do arquivo ");
    scanf("%s", nome);

    aqr = fopen(nome,"r");

    if (aqr == NULL){
        printf("Erro ao abrir o arquivo");
    } else {
        printf ("Aberto com sucesso! ");
    }
    

    while ((ch = fgetc(aqr)) != EOF){
        if (ch == '\n'){
            linhas++;
        }
    }
    printf("\n O arquivo tem %d linhas", linhas);
    
    return 0;
}