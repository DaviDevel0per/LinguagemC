/*

-> PROBLEMA:

Médio — Menu: crie uma função mostrarMenu que exiba:

1 - Jogar
2 - Configuracoes
3 - Sair

Em main, exiba Bem-vindo!, chame a função e depois exiba Escolha uma opcao.. Não precisa ler a escolha.

*/

#include <stdio.h>

void mostrarMenu() {
    printf( "1 - Jogar\n"
            "2 - Configuracoes\n"
            "3 - Sair\n"
    );
}

void main() {
    printf("Bem Vindo!\n\n");

    mostrarMenu();

    printf("\nEscolha uma opcao: ");
}