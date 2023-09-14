/*Usando como base o programa do slide (39,.r), modifique o programa para que ele faça o
seguinte:

• Criar uma variável do tipo “inteiro”, sendo ela int.
• Criar um comando “receba” (scanf).
• Modificar o comando diga para que ele mostre um valor inteiro.

*/
#include <stdio.h>
#define programa int main()
#define inicio {
#define fim }
#define inteiro int
#define receba scanf
#define diga printf

programa
inicio
inteiro variavel;
diga("Digite um valor inteiro: ");
receba ("%d",&variavel);
diga("O valor digitado e: %d", variavel);
fim
