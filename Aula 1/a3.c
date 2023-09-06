#include <stdio.h> 
int main(){
    int n; 

    printf ("Digite um número inteiro: ");
    scanf ("%d",&n);

    if(n%2 == 0){
        printf("PAR! \n");
    } else {
        printf("IMPAR! \n");
    }
    return 0;
}