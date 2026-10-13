#include <stdio.h>

int main(void)
{
    int X, Y;

    scanf("%d %d", &X, &Y);

    if (X % 2 > 0 || Y % 2 > 0)
    {   // Um dos números é impar
        if (X % 2 > 0 && Y % 2 > 0) // Os dois são impares
        {
            printf("1\n");
            
            return 0;
        }

        printf("0\n");
    }
    else // Ambos são pares
        printf("1\n");

    return 0;
}