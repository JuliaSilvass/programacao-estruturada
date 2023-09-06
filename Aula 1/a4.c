#include <stdio.h>
int main (){
    int l1;
    int l2;
    int l3;

    printf ("Digite o primeiro lado do triângulo: ");
    scanf ("%d", &l1);
    printf ("Digite o segundo lado do triângulo: ");
    scanf ("%d", &l2);
    printf ("Digite o terceiro lado do triângulo: ");
    scanf ("%d", &l3);

    if (l1 == l2 && l1 == l3){
        printf ("Triângulo equilátero \n");
    }else if (l1 == l2 || l1 == l3){
        printf ("Triângulo isósceles \n");
    }else {
        printf ("Triângulo escaleno \n");
    }
    return 0;
}