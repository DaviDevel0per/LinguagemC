#include <stdio.h>
#include <string.h>

int main() {
    int QT, N1, N2, OpcaoVencedora;
    char Jogador1[100], Jogador2[100], Escolha1[6], Escolha2[6];

    scanf("%d", &QT);

    for (int i = 0; i < QT; i++)
    {
        scanf("%s %s %s %s %d %d", Jogador1, Escolha1, Jogador2, Escolha2, &N1, &N2);

        if ((N1 + N2) % 2 > 0)
        {
            if (strcmp(Escolha1, "IMPAR") == 0)
            {
                printf("%s\n", Jogador1);
            }

            if (strcmp(Escolha2, "IMPAR") == 0)
            {
                printf("%s\n", Jogador2);
            }
        }
        else
        {
            if (strcmp(Escolha1, "PAR") == 0)
            {
                printf("%s\n", Jogador1);
            }

            if (strcmp(Escolha2, "PAR") == 0)
            {
                printf("%s\n", Jogador2);
            }
        }
    }

    return 0;
}