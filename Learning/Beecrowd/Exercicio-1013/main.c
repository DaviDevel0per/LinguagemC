#include <stdio.h>
#include <math.h>

/*
-- / Problema: / --

// Problema
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”.
Utilize a fórmula:

MaiorAB = (a+b+abs(a-b))/2

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessáriopara
chegar no resultado esperado.

// Entrada
O arquivo de entrada contém três valores inteiros.

// Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".

*/

int main()
{
    // Declarando Variáveis
    int A, B, C, MaiorAB, MaiorABC;

    // Lendo Entradas
    scanf("%d %d %d", &A, &B, &C);

    // Calculando Maior
    MaiorAB = (A + B + abs(A - B)) / 2;
    MaiorABC = (MaiorAB + C + abs(MaiorAB - C)) / 2;

    printf("%d eh o maior\n", MaiorABC);

    return 0;
};