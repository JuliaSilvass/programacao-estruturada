#include <stdio.h>
int main(){
  int saque = 0;
  int n100 = 0;
  int n50 = 0;
  int n10 = 0;
  int n5 = 0;
  int n2 = 0;

  printf("Digite o valor do saque: ");
  scanf("%d",&saque);

  // NOTA DE 100
  while(saque > 99){
    n100++;
    saque = saque - 100;
  }
  // NOTA DE 50
  while(saque > 49){
    n50++;
    saque = saque - 50;
  }
  // NOTA DE 10
  while(saque > 9){
    n10++;
    saque = saque - 10;
  }
  // NOTA DE 5
  while(saque > 4){
    n5++;
    saque = saque - 5;
  }
  // NOTA DE 2
  while(saque > 1){
    n2++;
    saque = saque - 2;
  }


  printf ("Notas de 100: %d \n", n100);
  printf ("Notas de 50: %d \n", n50);
  printf ("Notas de 10: %d \n", n10);
  printf ("Notas de 5: %d \n", n5);
  printf ("Notas de 2: %d \n", n2);

  return 0;  
}