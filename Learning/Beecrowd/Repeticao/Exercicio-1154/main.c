#include <stdio.h>

int main() {
    int n, i, soma;
    double media;

    soma = 0;

    scanf("%d", &n);

    for (i = 0; n > 0; i++)
    {   
        soma = soma + n;

        scanf("%d", &n);
    }

    media = (double)soma / i;

    printf("%.2lf\n", media);

    return 0;
}