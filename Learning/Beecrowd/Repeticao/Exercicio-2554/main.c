#include <stdio.h>

/*

Para cada sessão:
    Ler data, pessoas que podem ir sim ou não (0 ou 1)

*/

int main() {
    int N, D, Opcao, todos, encontrou;
    char Data[20];

    while (scanf("%d %d", &N, &D) != EOF)
    {   
        encontrou = 0;

        for (int i = 0; i < D; i++)
        {   // Datas consideradas
            scanf("%s", Data);
            todos = 1;

            for (int j = 0; j < N; j ++)
            {   // Pessoas que podem ir ou não
                scanf("%d", &Opcao);

                if (Opcao == 0) todos = 0;
            }

            if (encontrou == 0 && todos == 1)
            {
                printf("%s\n", Data);
                encontrou = 1;
            }
        }

        if (encontrou == 0)
            printf("Pizza antes de FdI\n");
    }

    return 0;
}