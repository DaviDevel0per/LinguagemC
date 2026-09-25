#include <stdio.h>
#include <math.h>

/*

Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que
o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima
de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo.

------------------------------------------------------------------------------------------------------

INICIO   05:00 AM
FIM      23:00 PM
Duracao  18h


*/

int main(void)
{
    int HI, HF, Duracao;

    scanf("%d %d", &HI, &HF);

    if (HI > HF) Duracao = (24 - HI) + HF;
    else Duracao = HF - HI;

    if (Duracao == 0) Duracao = 24;

    printf("O JOGO DUROU %d HORA(S)\n", Duracao);

    return 0;
}