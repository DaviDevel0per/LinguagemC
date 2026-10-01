#include <stdio.h>

int main(void)
{
    int A, B;

    scanf("%d %d", &A, &B);

    if (B % A > 0 && A % B > 0) printf("Nao sao Multiplos\n");
    else printf("Sao Multiplos");

    return 0;
}