#include <stdio.h>

int main() {
    int n, permitidos, aMin, aMax, altura;

    while (scanf("%d %d %d", &n, &aMin, &aMax) != EOF)
    {
        permitidos = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &altura);

            if (altura <= aMax && altura >= aMin) permitidos++;
        }

        printf("%d\n", permitidos);
    }

    return 0;
}