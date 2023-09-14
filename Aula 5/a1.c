/*1. Fazer uma função que recebe um mês e um ano como parâmetros e retorna o número de dias
daquele mês/ano. Dica: um ano é bissexto quando é múltiplo de 4 e não múltiplo de 100, ou
também quando é múltiplo de 400.*/

#include <stdio.h>
void funcao(int mes, int ano){

    if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)){
        // ano bissexto
        if ((mes % 2 == 0) && mes != 2){
            printf ("São 31 dias no mes %d no ano %d", mes, ano);
        } else if ((mes % 2 != 0)){
            printf ("São 30 dias no mes %d no ano %d", mes, ano);
        } else {
            printf ("São 29 dias no mes %d no ano %d", mes, ano);
        }
    } else {
        if ((mes % 2 == 0) && mes != 2){
            printf ("São 31 dias no mes %d no ano %d", mes, ano);
        } else if ((mes % 2 != 0)){
            printf ("São 30 dias no mes %d no ano %d", mes, ano);
        } else {
            printf ("São 28 dias no mes %d no ano %d", mes, ano);
        }
    }
    
}

int main (){
    int m, a;
    printf("Digite o mês e ano: "); 
    scanf ("%d %d", &m, &a);

    funcao (m, a);
    return 0;
}