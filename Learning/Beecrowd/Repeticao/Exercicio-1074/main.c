#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, valor;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {   
        scanf("%d", &valor);

        if (valor == 0)
        {
            printf("NULL\n");
            continue;
        }

        if (abs(valor) % 2 > 0)
            printf("ODD ");
        else
            printf("EVEN ");

        if (valor > 0)
            printf("POSITIVE\n");
        else
            printf("NEGATIVE\n");
    }
}