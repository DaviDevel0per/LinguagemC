#include <stdio.h>

int main() {
    int mat, matM, n;
    double nota, notaM = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %lf", &mat, &nota);

        if (nota > notaM)
        {
            notaM = nota;
            matM = mat;
        }
    }

    if (notaM < 8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n", matM);

    return 0;
}