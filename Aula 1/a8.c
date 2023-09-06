#include <stdio.h> 
int main(){
    double c = 1.70; 
    double j = 1.10; 
    int a = 0;

    while (j < c) {
        c = c + 0.02;
        j = j + 0.03;
        a++;
    }

    printf("Leva %d anos \n", a);
}
