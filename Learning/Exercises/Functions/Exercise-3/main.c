/*

-> PROBLEMA:

Funções chamando funções: crie mostrarTitulo, mostrarMenu e iniciarInterface. A função iniciarInterface deve chamar as outras
duas nessa ordem. Em main, chame apenas iniciarInterface.

*/

#include <stdio.h>

void mostrarTitulo(void) {
    printf( "Bem Vindo!\n\n");
}

void mostrarMenu(void) {
    printf( "1 - Jogar\n"
            "2 - Configuracoes\n"
            "3 - Sair\n\n"
            "Escolha uma opcao:\n"
    );
}

void iniciarInterface(void) {
    mostrarTitulo();
    mostrarMenu();
}

void main(void) {
   iniciarInterface();
}