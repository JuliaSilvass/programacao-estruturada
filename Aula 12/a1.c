#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 200
#define C 200

void preencher (int matr[][C]){
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            matr [i][j] = rand() % 2;    
        }
    }
}

void carq(int matr[][C]){
    FILE *arq;
    char ch;
    char *text = "P1\n"
                "#Exercicio 1 - atividade 2, Aula 9\n"
                "200 200\n";
    int x = 0;

    arq = fopen("text.pbm", "w+b");
    if (arq == NULL){
        printf("Não criou o arquivo! \n");
    }

    fprintf(arq, "%s", text);


    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            fprintf(arq, "%d", matr[i][j]);
        }
    }

    while ((ch = fgetc(arq)) != EOF ){
	    printf ("%c", ch);
	    x++;
    }
    
    
    fclose(arq);
}

int main (){
    int mat[L][C];
    srand(time(NULL));

    preencher (mat);
    carq (mat);

    return 0;
}