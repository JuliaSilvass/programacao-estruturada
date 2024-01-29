/*3. Faça um programa que receba um vetor de caracteres, gere e imprima um outro vetor onde as
vogais, do primeiro vetor, sejam substituídas pelo caracter '*'.*/
#include <stdio.h>
#include <string.h>


int main (){
    char vetor[30], sub[30];
    int i = 0;

    printf("Digite algo: ");
    fgets (vetor, 30, stdin);

    while (vetor [i] != '\0'){
        if(vetor [i] == 'A' || vetor [i] == 'a' || vetor [i] == 'E' || vetor [i] == 'e' || vetor [i] == 'I' || vetor [i] == 'i' || vetor [i] == 'O' || vetor [i] == 'o' || vetor [i] == 'U' || vetor [i] == 'u'){
            sub [i] = '*';
        } else {
            sub [i] = vetor [i];
        }
        i++;
    }

    puts(sub);
    return 0;
}
