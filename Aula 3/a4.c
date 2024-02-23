/*Faça um programa em C que receba um valor até 9999. Ex: 6226, 3113. Para isso
receba o valor em uma variável inteira e após isso monte um vetor com os valores:.

6 2 2 6
M C D U
*/

#include <stdio.h> 

int main() {
    int num = 0, vetor[4];
    char uni[4] = {'M', 'C', 'D', 'U'};

    printf("Digite um número de 4 dígitos: ");
    scanf("%d", &num);

    if (num <= 9999){  
        vetor[0] = num/1000;
        vetor[1] = (num/100)%10;
        vetor[2] = (num/10)%10;
        vetor[3] = num%10;
    } else {
        printf("Tem mais de 4 dígitos!");
    }
    
    for (int i = 0; i < 4; i++){
        printf("%d \t", vetor[i]);
        
        if (i == 3){
            printf("\n");
            for (int j = 0; j < 4; j++){
                printf("%c \t", uni[j]);
            }
        }
    }

    return 0;
}