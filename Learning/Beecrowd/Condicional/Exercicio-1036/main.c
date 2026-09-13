#include <stdio.h>
#include <math.h>

/*

Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”,
caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular".
Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem
correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.

BHASKARA:

(-b +- sqrt(Delta))/2a

Delta = b^2-4ac

*/

int main() {
    double A, B, C, Delta, Raiz1, Raiz2;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A > 0) {
        Delta = pow(B, 2) - (4 * A * C);

        if (Delta > 0) {
            Raiz1 = (-B + sqrt(Delta)) / (2 * A);
            Raiz2 = (-B - sqrt(Delta)) / (2 * A);

            printf( "R1 = %.5lf\n"
                    "R2 = %.5lf\n",
                    Raiz1,
                    Raiz2
            );
        }
        else {
            printf("Impossivel calcular\n");
        }
    }
    else {
        printf("Impossivel calcular\n");
    }

    return 0;
};