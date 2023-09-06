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