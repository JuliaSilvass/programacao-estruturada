/*Faça um programa em C que receba o nome de um arquivo de entrada e o nome de um arquivo de saída. 
Cada linha do arquivo de entrada possui colunas de tamanho de 30 e possui no máximo 30 linhas. 
No arquivo de saída deverá ser escrito o arquivo de entrada de forma inversa.
Veja um exemplo:

Arquivo de entrada:
hoje e dia de prova de pe
a prova esta muito facil

Arquivo de saída:
licaf otium atse avorp a
pe ed avorp ed aid e ejoh*/

#include <stdio.h>
#include <string.h>
int main (){
    FILE *aqrE, *aqrS;
    char nomeE[150], nomeS[150];
    
    printf("Digite o nome do arquivo de entrada ");
    scanf("%s", nomeE);

    printf("Digite o nome do arquivo de saída ");
    scanf("%s", nomeS);

    aqrE = fopen(nomeE,"r");
    aqrS = fopen(nomeS,"w+");

    if (aqrE == NULL){
        printf("Erro ao abrir o arquivo");
    } else {
        printf ("Aberto com sucesso! ");
    }
    
    if (aqrS == NULL){
        printf("Erro ao criar o arquivo");
    } else {
        printf ("Criado com sucesso! ");
    }

    return 0;
}