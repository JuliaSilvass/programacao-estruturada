/*2. Faça uma função que recebe, por parâmetros, a hora de inicio e a hora de término de um jogo,
ambas subdivididas em 2 valores distintos: horas e minutos. A função deve retornar a duração
do jogo em minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas e
que o jogo pode começar em um dia e terminar no outro.*/
#include <stdio.h>
void func (int h1, int h2, int m1, int m2){
    m1 = m1 + (h1*60);
    m2 = m2 + (h2*60);
    if ((m2-m1) == 1440){
        printf("mais de 24h");
    }else{
        printf("A duracao do jogo e de: %d minutos", (m2-m1));
    }
    

}
int main (){
    int hi, ht, mi, mt;
    printf("Digite a hora de inicio: \n");
    scanf("%dh%d", &hi, &mi);
    printf("Digite a hora termino: \n");
    scanf("%dh%d", &ht, &mt);

    func(hi, ht, mi, mt);

}