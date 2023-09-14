/*Faça um Programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do
saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis
serão as de 2, 5, 10, 50 e 100 reais. O programa não deve se preocupar com a quantidade de
notas existentes na máquina.

• Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma
nota de 50, três notas de 2.

• Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma
nota de 50, quatro notas de 10, uma nota de 5 e duas notas de 2.

• Exemplo 3: Para sacar a quantidade de 11 reais, o programa fornece uma nota de 5 e três
notas de 2.*/
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
  n100 = saque / 100;
  saque = saque % 100;
  // NOTA DE 50
  n50 = saque / 50;
  saque = saque % 50;
  // NOTA DE 10
  n10 = saque / 10;
  saque = saque % 10;
  // NOTA DE 5
  n5 = saque / 5;
  saque = saque % 5;
  // NOTA DE 2
  n2 = saque / 2;


  printf ("Notas de 100: %d \n", n100);
  printf ("Notas de 50: %d \n", n50);
  printf ("Notas de 10: %d \n", n10);
  printf ("Notas de 5: %d \n", n5);
  printf ("Notas de 2: %d \n", n2);

  return 0;  
}