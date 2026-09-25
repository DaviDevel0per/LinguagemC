#include <stdio.h>
#include <math.h>

/*

Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa
o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes
casos, sempre escrevendo uma mensagem adequada:

se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
Imprima todas as classificações do triângulo especificado na entrada.

----------------------------------------------------------------------------------------------------------

Passos:

1. Descobrir o menor
2. Descobrir o maior
3. Descobrir triangulo




*/

int main(void)
{
    double A, B, C, Aux;

    // AB AC BC

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A > 0 && B > 0 && C > 0) {
        if (A > C || A > B) {
            // A não é o menor

            Aux = A;

            if (B > A) {
                // B é o maior

                A = B;
                B = Aux;
            }
            else if (C > A) { // B < A, C > A
                // C é o maior

                A = C;
                C = Aux;
            }
        }
        else {
            // A é o menor

            Aux = A;

            if (B > C) {
                A = B;
                B = Aux;
            }
            else {
                A = C;
                C = Aux;
            }
        }
    }

    if (A >= (B + C)) printf("NAO FORMA TRIANGULO\n");
    else {
        if (pow(A, 2) == (pow(B, 2) + pow(C, 2))) printf("TRIANGULO RETANGULO\n");
        if (pow(A, 2) < (pow(B, 2) + pow(C, 2))) printf("TRIANGULO ACUTANGULO\n");
        if (pow(A, 2) > (pow(B, 2) + pow(C, 2))) printf("TRIANGULO OBTUSANGULO\n");
        if (A == B && B == C) printf("TRIANGULO EQUILATERO\n");
        else if (A == B || A == C || B == C) printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}