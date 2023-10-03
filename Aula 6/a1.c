/*1. Escreva uma função que receba duas matrizes 2x2, já preenchida com algum valor, e uma
matriz de 3 dimensões. A função deverá passar as matrizes 2x2 para uma matriz de 3
dimensões ([2][2][2]).*/
#include <stdio.h>
void func (int m1[][2], int m2[][2], int m3[][2][2]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){

            m3[0][i][j] = m1[i][j];
            printf ("posição i = %d, j = %d, matriz = %d \n", i, j, m3[0][i][j]);
            m3[1][i][j] = m2[i][j];
            printf ("posição i = %d, j = %d, matriz = %d \n", i, j, m3[1][i][j]);
            // não preciso declarar um for k, é so colocar o valor na matriz 
        }
        
    }

}

int main (){
    int m1 [2][2] = {1,2,3,4};
    int m2 [2][2] = {5,6,7,8};
    int m3 [2][2][2];
    
    func(m1, m2, m3);
}
