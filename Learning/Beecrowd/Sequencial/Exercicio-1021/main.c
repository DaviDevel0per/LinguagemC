#include <stdio.h>

int main() {
    double ValorMonetario, ValorMonetario2;
    int Notas[6], Moedas[6], Centavos, MonetarioInt, Resto;  // Notas e moedas decrescentes, 100, 50, 20...

    // Resto é usada como uma variável auxiliar, guardando o resto de todas as divisões

    // Lendo Valor Monetario
    scanf("%lf", &ValorMonetario);

    // Caso o valor seja alto demais ou negativo
    if (ValorMonetario <= 0 || ValorMonetario >= 1000000.0) return 0;

    // Transformando valor monetario em inteiro
    MonetarioInt = (int)ValorMonetario;

    // Quantidade de Notas

    Notas[0] = MonetarioInt / 100;
    Resto = MonetarioInt % 100;

    Notas[1] = Resto / 50;
    Resto = Resto % 50;

    Notas[2] = Resto / 20;
    Resto = Resto % 20;

    Notas[3] = Resto / 10;
    Resto = Resto % 10;

    Notas[4] = Resto / 5;
    Resto = Resto % 5;

    Notas[5] = Resto / 2;
    Resto = Resto % 2;

    ValorMonetario2 = (ValorMonetario - MonetarioInt) + Resto;

    // Quantidade de Moedas

    Centavos = ValorMonetario2 * 100;

    Moedas[0] = Centavos / 100;

    Resto = (Centavos % 100);

    Moedas[1] = Resto / 50;
    Resto = Resto % 50;

    Moedas[2] = Resto / 25;
    Resto = Resto % 25;

    Moedas[3] = Resto / 10;
    Resto = Resto % 10;

    Moedas[4] = Resto / 5;
    Resto = Resto % 5;

    Moedas[5] = Resto;

    // Printando

    printf(
        "NOTAS:\n"
        "%d nota(s) de R$ 100.00\n"
        "%d nota(s) de R$ 50.00\n"
        "%d nota(s) de R$ 20.00\n"
        "%d nota(s) de R$ 10.00\n"
        "%d nota(s) de R$ 5.00\n"
        "%d nota(s) de R$ 2.00\n"
        "MOEDAS:\n"
        "%d moeda(s) de R$ 1.00\n"
        "%d moeda(s) de R$ 0.50\n"
        "%d moeda(s) de R$ 0.25\n"
        "%d moeda(s) de R$ 0.10\n"
        "%d moeda(s) de R$ 0.05\n"
        "%d moeda(s) de R$ 0.01\n",
        Notas[0],
        Notas[1],
        Notas[2],
        Notas[3],
        Notas[4],
        Notas[5],
        Moedas[0],
        Moedas[1],
        Moedas[2],
        Moedas[3],
        Moedas[4],
        Moedas[5]
    );

    return 0;
};