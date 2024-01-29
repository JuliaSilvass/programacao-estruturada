/*Escreva uma função que dado um número real passado como parâmetro, retorne a parte inteira
e a parte fracionária deste número. Escreva um programa que chama esta função.
Protótipo:

void frac(float num, int* inteiro, float* frac);.*/
#include <stdio.h>
void func (float num, int *inteiro, float *frac){
    *inteiro = num;
    *frac = num - *inteiro; 
    
}

int main(){
    float num;
    float frac;
    int inteiro;

    printf("digite um numero: ");
    scanf("%f", &num);

    func (num, &inteiro, &frac);

    printf("\nA parte inteira de %.2f e %d: \n", num, inteiro);
    printf("A parte fracionada de %.2f e %.2f: \n", num, frac);
    return 0;
}
