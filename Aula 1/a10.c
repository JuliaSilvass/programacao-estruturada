#include <stdio.h>
int main (){
  int n = 0;
  int aux = 0;

  printf("Digite um número inteiro e positivo: ");
  scanf ("%d", &n);

  for (int i = 1; i < n; i++){
    if (n % i == 0){
      aux = aux + i;
    }
  }

  if (aux == n){
    printf("É um número perfeito! \n");
  } else {
    printf("Não é um número perfeito! \n");
  }

  return 0;
}