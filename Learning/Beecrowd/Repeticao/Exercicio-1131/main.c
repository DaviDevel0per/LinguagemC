#include <stdio.h>

int main() {
    int GolsInt, GolsGre, Opcao, Grenais, GanhouInt, GanhouGre, Empates;

    Opcao = 1;
    Grenais = 0;
    GanhouInt = 0;
    GanhouGre = 0;
    Empates = 0;

    while (Opcao != 2)
    {   // Novo Grenal
        scanf("%d %d", &GolsInt, &GolsGre);

        if (GolsInt == GolsGre)
        {
            Empates++;
        }
        else if (GolsInt > GolsGre)
        {
            GanhouInt++;
        }
        else
        {
            GanhouGre++;
        }

        Grenais++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &Opcao);
    }

    printf( "%d grenais\n"
            "Inter:%d\n"
            "Gremio:%d\n"
            "Empates:%d\n", Grenais, GanhouInt, GanhouGre, Empates);

    if (GanhouInt == GanhouGre)
    {
        printf("Nao houve vencedor\n");
    }
    else if (GanhouInt > GanhouGre)
        printf("Inter venceu mais\n");
    else
        printf("Gremio venceu mais\n"); 

    return 0;
}