/*O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto
é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes.
Por exemplo, com uma troca de três posições, ‘A’ seriasubstituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante.
Implemente um programa que faça uso desse Código de César (3 posições), entre com uma string e retorne a string codificada.
Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR*/

terminar ahhhhhhhhhhhh

#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[50];
    int i = 0, tamp = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);

    tamp = strlen(palavra);
    while (i != tamp)
    {
        if (palavra[i] == ' ')
        {
            palavra[i] = palavra[i];
        }
        else if (palavra[i] == 'z' || palavra[i] == 'x' || palavra[i] == 'i')
        {
            palavra[i] = 97;
            palavra[i] = palavra[i] + 2;
        }
        else if (palavra[i] == 'Z')
        {
            palavra[i] = 65;
            palavra[i] = palavra[i] + 2;
        }
        else
        {
            palavra[i] = palavra[i] + 3;
        }

        i++;
    }

    puts(palavra);

    return 0;
}