#include <stdio.h>
int main (){
    int a, b; 

    printf ("digite dois valores: ");
    scanf ("%d %d", &a, &b);

    if (a%2 == 0){
        //PAR 
        for (int i = a; i <= b; i++){
            if (i%2 == 0){
            printf("%d ", i);
            }
        }

    } else {
        //IMPAR 
        for (int i = a; i <=b; i++){
            if (i % 2 != 0){
                printf ("%d ", i);
            }
        }
    }
    printf ("\n");
}