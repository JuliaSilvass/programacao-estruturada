/*Sabemos que as pedras do jogo de dominó são
representadas por dois valores cada pedra, sendo
que as combinações possíveis são [00] até [66], totalizando 28 peças.
Faça um programa em “c” que monte as peças do jogo de dominó em seguida
distribua 7 pedras para cada um dos 2 jogadores e as pedras que ficam na pilha,
obviamente que a cada rodada do programa as pedras devem ser diferentes para
cada um dos jogadores (deve haver uma rotina no programa para misturar as
pedras a ser entregue).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Peca{
    int cima; 
    int baixo; 
};

//distruibuir as peças para os jogadores
void distribuir (struct Peca jogador1[], struct Peca jogador2[], struct Peca pilha[],  struct Peca pecas[]){
    for (int i = 0; i < 7; i++){
        jogador1[i] = pecas[i];
        jogador2[i] = pecas[i+7];
    }

    for (int i = 0; i < 14; i++){
        pilha[i] = pecas[i+14];
    }
    
    
}

//Misturar as peças
void mistruraPecas (struct Peca pecas[]){
    srand(time(NULL));
    int auxiliaTocar; 
    for (int i = 27; i > 0; i--){
        int indiceAleatorio = rand() % (i + 1);
        struct Peca auxiliaTocar = pecas[i];
        pecas[i] = pecas[indiceAleatorio];
        pecas[indiceAleatorio] = auxiliaTocar;
    }
}

// Montar as peças de dómino
void criarPecas (struct Peca pecas[]){
    int contadorPeca = 0;
    for (int cima = 0; cima <= 6; cima++){
        for (int baixo = cima; baixo <=6; baixo++){
            pecas[contadorPeca].cima = cima;
            pecas[contadorPeca].baixo = baixo; 
            contadorPeca++;
        }   
    }
}

int main (){
    struct Peca pecas[28]; 

    // Chama função para criar as peças
    criarPecas(pecas);

    // Exibe as peças para ver o resultado
    printf ("Exibicao das pecas formadas: \n");
    for (int i = 0; i < 28; i++) {
        printf("[%d|%d] ", pecas[i].cima, pecas[i].baixo);
        if (pecas[i].baixo == 6) printf("\n"); 
    }


    //Chama função para embaralhar as peças usando o algoritmo de fisher-yates
    mistruraPecas(pecas);
    // Exibe as peças para ver o resultado
    printf ("Exibicao das pecas misturadas: \n");
    for (int i = 0; i < 28; i++) {
        printf("[%d|%d] ", pecas[i].cima, pecas[i].baixo);
        if (pecas[i].baixo == 6) printf("\n");
    }

    //Chama a função para distrubuir as peças entre os jogadores
    struct Peca jogador1[7];
    struct Peca jogador2[7];
    struct Peca pilha[14];
    distribuir(jogador1, jogador2, pilha, pecas);

    printf("\n Pecas do jogador 1: \n");
    for (int i = 0; i < 7; i++){
        printf("[%d|%d] ", jogador1[i].cima, jogador1[i].baixo);
    }

    printf("\n Pecas do jogador 2: \n");
    for (int i = 0; i < 7; i++){
        printf("[%d|%d] ", jogador2[i].cima, jogador2[i].baixo);
    }    

    printf("\n Pecas da pilha: \n");
    for (int i = 0; i < 14; i++){
        printf("[%d|%d] ", pilha[i].cima, pilha[i].baixo);
    } 

    return 0;

}