#include <stdio.h>
#include <string.h>

/*

a tesoura corta o papel;
o papel embrulha a pedra;
a pedra esmaga o lagarto;
o lagarto envenena Spock;
Spock destrói a tesoura;
a tesoura decapita o lagarto;
o lagarto come o papel;
o papel contesta Spock;
Spock vaporiza a pedra;
a pedra quebra a tesoura.

*/

int main() {
    int n;
    char escolha1[8], escolha2[8];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {   // representa 1 Rodada
        scanf("%s %s", escolha1, escolha2);

        if (strcmp(escolha1, escolha2) == 0)
            printf("Caso #%d: De novo!\n", i + 1);

            // CASOS DE ESCOLHA 1
        else if (strcmp(escolha1, "pedra") == 0)
        {
            if (strcmp(escolha2, "lagarto") == 0 || strcmp(escolha2, "tesoura") == 0)
                printf("Caso #%d: Bazinga!\n", i + 1);
            else if (strcmp(escolha2, "papel") == 0 || strcmp(escolha2, "Spock") == 0)
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
        }
        else if (strcmp(escolha1, "papel") == 0)
        {
            if (strcmp(escolha2, "pedra") == 0 || strcmp(escolha2, "Spock") == 0)
                printf("Caso #%d: Bazinga!\n", i + 1);
            else if (strcmp(escolha2, "tesoura") == 0 || strcmp(escolha2, "lagarto") == 0)
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
        }
        else if (strcmp(escolha1, "tesoura") == 0)
        {
            if (strcmp(escolha2, "papel") == 0 || strcmp(escolha2, "lagarto") == 0)
                printf("Caso #%d: Bazinga!\n", i + 1);
            else if (strcmp(escolha2, "Spock") == 0 || strcmp(escolha2, "pedra") == 0)
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
        }
        else if (strcmp(escolha1, "lagarto") == 0)
        {
            if (strcmp(escolha2, "Spock") == 0 || strcmp(escolha2, "papel") == 0)
                printf("Caso #%d: Bazinga!\n", i + 1);
            else if (strcmp(escolha2, "pedra") == 0 || strcmp(escolha2, "tesoura") == 0)
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
        }
        else if (strcmp(escolha1, "Spock") == 0)
        {
            if (strcmp(escolha2, "tesoura") == 0 || strcmp(escolha2, "pedra") == 0)
                printf("Caso #%d: Bazinga!\n", i + 1);
            else if (strcmp(escolha2, "lagarto") == 0 || strcmp(escolha2, "papel") == 0)
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
        }
    }

    return 0;
}