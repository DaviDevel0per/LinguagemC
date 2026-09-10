/*

-> PROBLEMA:
Simulação de dano: crie simularDano(int vida, int dano, int golpes), sem retorno.
A cada golpe, reduza a cópia local de vida, exiba a vida restante e pare se ela
chegar a zero. Não deixe a vida ficar negativa.

*/

#include <stdio.h>

void simularDano(int Vida, int Dano, int Golpes) {
    for (; Golpes > 0 && Vida > 0; Golpes--) {
        if (Dano > Vida) {
            Vida = 0;
        }
        else {
            Vida = Vida - Dano;
        }

        printf("Vida: %d\n", Vida);
    }
}

int main(void) {
    simularDano(2573, 739, 7);

    return 0;
}