#include <stdio.h>

int main()
{
    int DiasEntrada,
        Anos,
        Meses,
        Dias;

    scanf("%d", &DiasEntrada);

    Anos = DiasEntrada / 365;
    Meses = (DiasEntrada % 365) / 30; // (DiasEntrada % 365) Representa os dias que restaram da divisao de dias por 365
    Dias = (DiasEntrada % 365) % 30; // (DiasEntrada % 365) % 12 Resto de dias da divisao de dias por 12

    printf( "%d ano(s)\n"
            "%d mes(es)\n"
            "%d dia(s)\n",
            Anos,
            Meses,
            Dias
    );

    return 0;
};