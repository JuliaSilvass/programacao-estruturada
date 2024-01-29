/*Escreva uma função CALCULA que:
• receba como parâmetros duas variáveis inteiras, X e Y;
• retorne em X a soma de X e Y;
• retorne em Y a subtração de X e Y.
▪ Obs: Não deve ser criada mais nenhuma variável além de X e Y, tanto na função MAIN como na CALCULA.*/

#include <stdio.h>
void calcula(int *x, int *y){
    *x = *x + *y;
    *y = (*x - *y) - *y;
}
int main(){
    int x, y; 

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("\nDigite o valor de Y: ");
    scanf("%d",&y);

    calcula(&x, &y);

    printf("X + Y = %d \n", x);
    printf("X - Y = %d \n", y);
}