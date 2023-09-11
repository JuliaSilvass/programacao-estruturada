/*Leia um número inteiro positivo N e escreva os N primeiros termos da série de Fibonacci (cada
termo é a soma dos dois termos anteriores)(a série é iniciada com os termos 0 e 1).

Ex.: (os 10 primeiros termos) 0, 1, 1, 2, 3, 5, 8, 13, 21, 34*/
#include <stdio.h>
int main (){
    int n; 
    int a = 0;
    int b = 1;
    int f = 0;

    printf ("Digite um número: ");
    scanf ("%d", &n);



    for (int i = 1; i < n; i++){
        printf ("%d \n", f);
        if (f == 0){
            printf ("%d \n", b);
        }
        f = a + b;
        a = b; 
        b = f;
    }

    return 0;
}