#include <stdio.h>

int main(void)
{
    int A, B, C, Aux, IA, IB, IC;

    scanf("%d %d %d", &A, &B, &C);

    IA = A;
    IB = B;
    IC = C;

    if (A > B)
    {
        Aux = A;
        A = B;
        B = Aux;
    }

    if (A > C)
    {
        Aux = A;
        A = C;
        C = Aux;
    }

    if (B > C)
    {
        Aux = B;
        B = C;
        C = Aux;
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", A, B, C, IA, IB, IC);

    return 0;
}