#include <stdio.h>

int main(void)
{
    int D;

    scanf("%d", &D);

    if (D <= 2000 && D > 1400)
        printf("3\n");
    else if (D > 800)
        printf("2\n");
    else
        printf("1\n");

    return 0;
}