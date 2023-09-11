/*Faça um programa em C que receba um número inteiro e positivo, e diga se esse número é
primo ou não. Obs: Um número é primo somente quando for divisível por 1 e por ele mesmo.*/
#include <stdio.h> 
int main (){
    int n = 0, aux = 0; 

    printf ("digite um número: ");
    scanf ("%d", &n);

        if (n % n == 0 && n % 1 == 0){
          for (int i = 1; i < n; i++){
            if (n % i == 0){
              aux++;
            }
          }          
        }

        if (aux > 1){
          printf ("NÃO É PRIMO! \n ");
        } else {
          printf ("É primo! \n");
        }
    
    return 0; 
}