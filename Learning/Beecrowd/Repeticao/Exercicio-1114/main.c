#include <stdio.h>

int main() {
    int tentativa;

    scanf("%d", &tentativa);

    while (tentativa != 2002)
    {
        printf("Senha Invalida\n");
        scanf("%d", &tentativa);
    }

    printf("Acesso Permitido\n");

    return 0;
}