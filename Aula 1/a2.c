#include <stdio.h>
int main(){
    float a;
    float p;

    printf("Digite o peso em kg: ");
    scanf ("%f", &p);
    printf("Digite a altura em metros: ");
    scanf ("%f", &a);

    printf("O IMC é: %.2f \n", p/(a*a));
   return 0;
}