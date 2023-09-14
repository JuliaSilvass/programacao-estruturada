/*
Dados dois vetores de inteiros x e y, já preenchidos cada um conforme instruções de entrada,
faça um programa em C que implemente 3 funções conforme segue:
• Diferença entre x e y: todos os elementos de x que não existam em y.
• Interseção entre x e y: apenas os elementos que aparecem nos dois vetores.
• União entre x e y: todos os elementos de x, e todos os elementos de y que não estão em x.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanho 5
void diferenca (int x[], int y[]){
    printf ("\n");
    printf ("Diferenca (elementos de x que nao existe em y): ");
    for (int i = 0; i < tamanho; i++){
    int aux = 0;// váriavel dentro do for para que toda vez que o aux = 1, ele retornar ao 0 para quando o número for igual.
        for (int j = 0; j < tamanho; j++){
            if (x[i] == y[j]){
                aux = 1;
            }
        }
        if (aux == 0){
            printf ("%d \t", x[i]);
        }    
    }
}

void intersecao (int x[], int y[]){
    printf ("\n");
    printf ("Intersecao (existe em x e y): ");

    for (int i = 0; i < tamanho; i++){
        int aux = 0;
        for (int j = 0; j < tamanho; j++){
            if (x[i] == y[j]){
            aux = 1;
            }
        }    
        if (aux == 1){
            printf ("%d ", x[i]);
        }
    }
}

void uniao (int x[], int y[]){

    printf ("\n");
    printf ("Uniao (todos so elementos de x e y): ");
    for (int i = 0; i < tamanho; i++){
        printf ("%d ", x[i]);
    }
    for (int i = 0; i < tamanho; i++){
    int aux = 0;
        for (int j = 0; j < tamanho; j++){
            if (y[i] == x[j]){
                aux = 1;
            }
        }
        if (aux == 0){
            printf ("%d \t", y[i]);
        }    
    }   
}

int main(){
int a[tamanho], b[tamanho];
srand (time (NULL));
printf ("vetor x: ");
for (int i = 0; i < tamanho; i++){
    a[i] = rand () % 20;
    printf ("%d \t", a[i]);
}
printf ("\n");
printf ("vetor y: ");
for (int i = 0; i < tamanho; i++){
    b[i] = rand () % 20;
    printf ("%d \t", b[i]);
}
printf ("\n");

diferenca (a, b);
intersecao (a, b);
uniao (a, b);
return 0;
}