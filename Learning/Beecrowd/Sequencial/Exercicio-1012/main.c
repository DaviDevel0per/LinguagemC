#include <stdio.h>
#include <math.h>

/*
-- / Problema: / --

// Problema
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

// Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

// Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com
mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos
após o ponto decimal.

*/

int main()
{
    // Constantes
    const double PI = 3.14159;

    // Declarando Variaveis
    double  A, B, C, AreaTrianguloRetangulo, AreaCirculo,
            AreaTrapezio, AreaQuadrado, AreaRetangulo;;

    // Lendo valores de entrada
    scanf("%lf %lf %lf", &A, &B, &C);

    // Calculando Areas
    AreaTrianguloRetangulo = (A * C) / 2;
    AreaCirculo = PI * pow(C, 2);
    AreaTrapezio = ((A + B) * C) / 2;
    AreaQuadrado = pow(B, 2);
    AreaRetangulo = A * B;

    // Imprimindo Resultado das Áreas
    printf(
        "TRIANGULO: %.3lf\n"
        "CIRCULO: %.3lf\n"
        "TRAPEZIO: %.3lf\n"
        "QUADRADO: %.3lf\n"
        "RETANGULO: %.3lf\n",
        AreaTrianguloRetangulo,
        AreaCirculo,
        AreaTrapezio,
        AreaQuadrado,
        AreaRetangulo
    );

    return 0;
};