/*2. Faça um programa que receba o vetor nome com o seu nome (nome completo), fornecido via
teclado. Utilize a função fgets para a leitura e em seguida use a função puts para imprimir o
nome. Substitua a função fgets pela função scanf e avalie os resultados.

No scanf o \O fica no primeiro "espaço", então printa o julia do nome julia silva.*/


#include <stdio.h>
#include <string.h>

int main (){
    char nome[50];

    printf("Digite nome: ");
    fgets(nome, 50, stdin);

    puts(nome);

    return 0;
}