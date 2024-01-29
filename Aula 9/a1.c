/*Baseado em um “baralho tradicional” (cada carta tem seu naipe e seu valor), implemente a
parte de montagem e distribuição (sorteio) de cartas para 2 jogadores, considerando que cada
jogador irá receber N cartas. Exiba na tela as cartas que cada um dos jogadores recebeu e as
cartas restantes. código do baralho fornecido pelo professor, so completar como o que falta.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXN 10 //tinha necessidade de ser 10 ??

struct carta {
  int valor;
  char naipe[MAXN];
}; 

typedef struct carta Carta;


void preenche(Carta []);
void distribui(Carta [], Carta[], Carta[]);
void baralha(Carta []);
void mostra_cartas(Carta []);
void mostra_cartas_baralho(Carta []);

int main()
{
 
 int nro_cartas1=26, nro_cartas2=26;
 char a;
 
 Carta baralho[52], jog1[26], jog2[26];
 
 srand(time(NULL));
 preenche(baralho);
 printf ("\n*** CARTAS ****\n");
 mostra_cartas_baralho(baralho);
 a=getchar();
 baralha(baralho);

 printf ("\n*** CARTAS EMBARALHADAS ****\n");
 mostra_cartas_baralho(baralho);
 a=getchar();

 distribui(baralho, jog1, jog2);
 printf ("\n*** CARTAS DO JOGADOR 1 ****\n");
 
 mostra_cartas(jog1);
  a=getchar();

 printf ("\n*** CARTAS DO JOGADOR 2 ****\n");
 mostra_cartas(jog2);
  a=getchar();

 
 printf ("\nQtde de cartas do jog1 %d e qtde de cartas do jog2 %d", nro_cartas1, nro_cartas2);
 return 1;
}

void preenche( Carta baralho[]) {
  int i=0,x,y; 
  char naipes[][MAXN]={"Copas","Espadas","Paus","Ouros"}; // tinha necessidade ?
  
  for (x=0;x<4;x++)
    for (y=1;y<=13;y++,i++)
    {
    baralho[i].valor = y;
    strcpy(baralho[i].naipe,naipes[x]);
    }
}

void baralha(Carta baralho[]) {
      int j;
      Carta temp;

  for (int i = 0; i < 50; i++){
    j = rand()%50;
    temp = baralho [i];
    baralho [i] = baralho[j];
    baralho [j] = temp;
  }
   
}

void distribui(Carta baralho[], Carta jog1[], Carta jog2[]) {
  int j;
  for (int i = 0; i < 26; i=+2){
      jog1[i] = baralho[i];
  }
}

void mostra_cartas (Carta carta_temp[])
{
  int i;
  for(i=0;i<26;i++) 
      printf("%d - %2d de %-7s%c",i, carta_temp[i].valor,carta_temp[i].naipe,
           (i+1)%3? '\t': '\n');

}

void mostra_cartas_baralho (Carta carta_temp[]){
  int i;
  for(i=0;i<52;i++) 
      printf("%d - %2d de %-7s%c",i, carta_temp[i].valor,carta_temp[i].naipe,
           (i+1)%3? '\t': '\n'); // é um operador condicional ternário ---------------------------------------------------------------

}