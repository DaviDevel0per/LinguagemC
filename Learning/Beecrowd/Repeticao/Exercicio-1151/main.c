#include <stdio.h>

int main() {
    int n, ultimo, atual, proximo;

    ultimo = 0;
    atual = 0;
    proximo = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d", atual);

        if (i < n - 1) printf(" ");

        ultimo = atual;
        atual = proximo;
        proximo = atual + ultimo;
    }
    
    printf("\n");

    return 0;
}