#include <stdio.h>

int main(void) {
    FILE *aqr;
    int v1 = 0, total  = 0;
    
    aqr =  fopen ("q1.txt", "r+");

    while (fscanf(aqr, "%d", &v1) != EOF){

        fscanf(aqr, "%d", &v1);
        printf ("v1 = %d \n", v1);
        total = total + v1;
    }

    printf ("total = %d", total);
    fclose(aqr);
    return 1;   
}