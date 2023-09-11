/*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus
divisores positivos diferentes de n. Construa um programa em C que verifica se um dado
número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6.*/
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