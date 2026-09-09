#include <stdio.h>

int main()
{
    int Entrada, Resto,
        Horas, Minutos, Segundos;

    scanf("%d", &Entrada);

    Horas = Entrada / 3600;
    Resto = Entrada % 3600;

    printf("Resto: %d\n", Resto);

    Minutos = Resto / 60;
    Segundos = Resto % 60;

    printf("%d:%d:%d\n", Horas, Minutos, Segundos);
};