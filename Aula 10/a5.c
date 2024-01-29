/*Escreva uma função que receba duas string. A função deverá concatenar a segunda string ao
final da primeira (simulando a função strcat).*/

#include <stdio.h>
#include <string.h>

int main (){
    char vetor1[50];
    char vetor2[50];
    int tam_vetor1, tam_vetor2, total, i=0, j=0;

    printf("digite algo: ");
    fgets (vetor1, 50, stdin);
    printf("digite algo: ");
    fgets (vetor2, 50, stdin);

    tam_vetor1 = strlen (vetor1);
    tam_vetor2 = strlen (vetor2);
    total = tam_vetor1 + tam_vetor2 + 1;

    while (i != total){
        if (i < tam_vetor1 && (vetor1 [i] != '\n')){
            vetor1[i] = vetor1 [i];
        } else {            
            vetor1[i] = vetor2 [j];
            j++;
        }
        
        i++;
    }

    puts(vetor1);
    return 0;
}
