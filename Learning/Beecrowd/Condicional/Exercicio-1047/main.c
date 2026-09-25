#include <stdio.h>
#include <math.h>

/*

Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .

---

MI = 20
MF = 30

Duracao = 10

MI = 30
MF = 20

Duracao = 60

*/

#include <stdio.h>

int main(void)
{
    int HI, MI, HF, MF, Duracao;

    scanf("%d %d %d %d", &HI, &MI, &HF, &MF);

    Duracao = ((HF - HI) * 60) + (MF - MI);

    if (Duracao <= 0) Duracao = Duracao + (24 * 60);

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", Duracao / 60, Duracao % 60);

    return 0;
}