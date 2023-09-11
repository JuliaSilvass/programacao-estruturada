/*Fazer um programa em “C” que pergunta um valor em metros e imprime o correspondente em
decímetros, centímetros e milímetros.*/
#include <stdio.h>
int main(){
    double v;
    
    printf ("Informe o valor em metros: \n");
    scanf ("%lf", &v);

    printf ("O valor em decímetros é: %.2lf \n", v*10);
    printf ("O valor em centímetros é: %.2lf \n", v*100);
    printf ("O valor em milímetros é: %.2lf \n", v*1000);
    return 0;
}