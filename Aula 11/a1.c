/*Faça um programa em “C” que conte quantas vezes determinada letra (informada) aparece
no arquivo de texto texto.txt.*/
#include <stdio.h>
#include <string.h>
int main(){
    FILE *aqr; //Para o arquivo
    char ch, letra; // Para receber o arquivo
    int x = 0; // Contador

    printf("Qual letra?");
    scanf("%c", &letra);
    aqr = fopen("texto.txt", "r"); // Abre o arquivo

    
    while ((ch = fgetc(aqr)) != EOF){
        if (letra == ch){
            x++;
        }
    }

    printf("\n%d", x);
    fclose(aqr);
    return 0; 
    
}