#include <stdio.h>
int main (){
    int v1, v2, v3;
    int menor, inter, maior;

    printf("Digite três valores: ");
    scanf ("%d %d %d", &v1, &v2, &v3);

    if (v1 > v2 && v1 > v3){
        maior  = v1;
    } else if (v2 > v3 && v2 > v1){
        maior = v2;
    } else{
        maior = v3;
    }

    if (v1 < v2 && v1 < v3){
        menor = v1;
    } else if (v2 < v3 && v2 < v1){
        menor = v2;
    } else {
        menor = v3;
    }

    if ((v1 < v2 && v1 > v3) || (v1 > v2 && v1 < v3)){
        inter = v1;
    } else if ((v2 < v1 && v2 > v3) || (v2 > v1 && v2 < v3)){
        inter = v2;
    } else {
        inter = v3;
    }

    printf ("Menor: %d, Intermediário: %d, Maior: %d \n", menor, inter, maior);
    return 0;
}