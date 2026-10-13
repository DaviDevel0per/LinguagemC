#include <stdio.h>

int main() {
    int Entrada, Neg = 0, Imp = 0, Par = 0, Pos = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &Entrada);

        if (Entrada > 0) Pos++;
        if (Entrada < 0) Neg++;
        if (Entrada % 2 > 0) Imp++;
        if (Entrada % 2 == 0) Par++;
    }

    printf( "%d valor(es) par(es)\n"
            "%d valor(es) impar(es)\n"
            "%d valor(es) positivo(s)\n"
            "%d valor(es) negativo(s)\n", Par, Imp, Pos, Neg);

    return 0;
};