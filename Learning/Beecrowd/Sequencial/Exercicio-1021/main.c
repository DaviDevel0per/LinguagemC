#include <stdio.h>

int main() {
    double ValorMonetario, ValorMonetario2;
    int Notas[6], Moedas[6], Centavos, Resto; // Notas e moedas decrescentes, 100, 50, 20...
    const int NotasMoedas[12] = {100, 50, 20, 10, 5, 2, 100, 50, 25, 10, 5, 1};

    // Resto é usada como uma variável auxiliar, guardando o resto de todas as divisões

    // Lendo Valor Monetario
    scanf("%lf", &ValorMonetario);

    // Caso o valor seja alto demais ou negativo
    if (ValorMonetario <= 0 || ValorMonetario >= 1000000.0) return 0;

    // Quantidade de Notas

    Notas[0] = (int)ValorMonetario / 100;
    Resto = (int)ValorMonetario % NotasMoedas[0];

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", Notas[0]);

    for (int i = 1; i < 12; i++)
    {       
        if (i < 6)
        {   // Apenas notas
            Notas[i] = Resto / NotasMoedas[i];
            printf("%d nota(s) de R$ %d.00\n", Notas[i], NotasMoedas[i]);
        }
        else
        {   // Apenas moedas
            if (i == 6)
            {   // Moedas[0] apenas
                printf("MOEDAS:\n");
                Moedas[0] = (((ValorMonetario - (int)ValorMonetario) + Resto) * 100) / NotasMoedas[6];
                printf("%d moeda(s) de R$ 1.00\n", Moedas[0]);
            }
            else
            {
                Moedas[i] = Resto / NotasMoedas[i];
                printf("%d moeda(s) de R$ %.2f\n", Moedas[i], (float)NotasMoedas[i] / 100);
            }
        }

        Resto = Resto % NotasMoedas[i];
    }

    // ValorMonetario2 = (ValorMonetario - MonetarioInt) + Resto;

    // // Quantidade de Moedas

    // Centavos = ValorMonetario2 * 100;

    // Moedas[0] = Centavos / 100;

    // Resto = (Centavos % 100);

    // Moedas[1] = Resto / 50;
    // Resto = Resto % 50;

    // Moedas[2] = Resto / 25;
    // Resto = Resto % 25;

    // Moedas[3] = Resto / 10;
    // Resto = Resto % 10;

    // Moedas[4] = Resto / 5;
    // Resto = Resto % 5;

    // Moedas[5] = Resto;

    // Printando

    return 0;
};