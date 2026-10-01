#include <stdio.h>

/*

Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo,
calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal.

Exemplo de Entrada	
6.0 4.0 2.0
6.0 4.0 2.1

Exemplo de Saída
Area = 10.0
Perimetro = 12.1

*/

int main(void)
{
    double A, B, C, Area, Perimetro;

    scanf("%lf %lf %lf", &A, &B, &C);

    if ((A + B) > C && (C + B) > A && (A + C) > B) {
        Perimetro = A + B + C;
        printf("Perimetro = %.1lf", Perimetro);
    }
    else {
        Area = ((A + B) * C) / 2.0;
        printf("Area = %.1lf", Area);
    }

    return 0;
}