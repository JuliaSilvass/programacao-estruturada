/*Faça um programa que desenhe na tela losangos ou triângulos utilizando somente o caractere
“%” (veja exemplos abaixo). O usuário é quem escolhe o que deve ser impresso. O usuário
também deve ter a opção de escolher o tamanho (em linhas) da figura a ser desenhada.

                                   %
                                 %%%%%
                               %%%%%%%%%
                             %%%%%%%%%%%%%
                               %%%%%%%%%
                                 %%%%%
                                   %

%
%%%
%%%%%
%%%%%%%
%%%%%%%%%*/

#include <stdio.h>
int main (){
  int l = 0, escolha;

  printf ("Digite a quantidade de linhas: ");
  scanf ("%d",&l);
  printf("Escolha entre 1-Losango ou 2-triangulo");
  scanf("%d",&escolha);


  switch (escolha){
  case 1:
    for (int i = 0; i <= l; i+=2){
     for (int j = 0; j < (l - 1)/2; j++){
      printf (" ");
     }
     for (int j = 0; j < i; j++){
      printf("%%");
     }
     printf("\n");

  }
  
  for (int i = l-2; i >= 1; i-=2){
    for (int j = 0; j < (l - i) / 2; j++){
      printf(" ");
    }
    for (int j = 0; j < i; j++){
      printf ("%%");
    }
    printf("\n");

  }
    break;
  case 2:
    for (int i = 0; i <= l; i++){
      for (int k = 0; k < i; k++){
        printf("%%");
      }
        printf("\n");

    }
    break;
  default: 
    printf("Escolha invalida");
    break;
  }

  
  

   

}