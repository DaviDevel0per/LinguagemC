/*

-> PROBLEMA:

Barra de vida: crie mostrarBarra(int quantidade), sem retorno.
Ela deve usar um laço para exibir essa quantidade de # e depois uma quebra de linha.

*/

#include <stdio.h>

void mostrarBarra(int Quantidade) {
    printf("Barra de vida: ");

    for (int i = 1; i <= Quantidade; i++) {
        printf("#");
    }

    printf("\n");
}

int main(void) {
    mostrarBarra(5);

    return 0;
}