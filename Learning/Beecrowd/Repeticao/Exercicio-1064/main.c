#include <stdio.h>

int main() {
    double Soma, Valor, Media;
    int i, Positivos;

    Soma = 0;
    Positivos = 0;

    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &Valor);

        if (Valor > 0)
        {
            Positivos++;
            Soma = Soma + Valor;
        }
    }

    Media = Soma / Positivos;

    printf( "%d valores positivos\n"
            "%.1lf\n", Positivos, Media);

    return 0;
};