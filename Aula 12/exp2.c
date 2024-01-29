#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp;
    char letra [5];
    int total = 0, x, linha  = 0;
    
    fp =  fopen ("q2.txt", "r");


    while (fgets(letra, 5, fp) != NULL){
        printf ("letra 1 = %s \n", letra);
        letra[2] = '\0';
        printf ("letra 2 = %s \n", letra);
        x=strlen (letra);

        total = total + x;
        linha++;
    }
    

    printf ("%d - %d", total, linha);
    fclose(fp);
    return 1;   
}