#include <stdio.h>

/*

1. Ler casos de testes (n), População A (PA), População B (PB), Taxa de crescimento A (G1), Taxa de crescimento B (G2)
2. Descobrir quantos anos demorará para a cidade A ultrapassar a cidade B
    for (a = 0;  PA < PB; a++)
    {   
        Acrescentar Taxa de crescimento de A e de B;
    }

*/

int main() {
    int T, PA, PB, A;
    double G1, G2;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {   
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        for (A = 0; PA <= PB && A <= 100; A++)
        { // Loop de acréscimo da taxa
            PA = PA * (1 + G1 / 100);
            PB = PB * (1 + G2 / 100);
        }

        // População de A ultrapassou B

        if (A > 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%d anos.\n", A);
        }

    }

    return 0;
}