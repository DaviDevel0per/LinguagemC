#include <stdio.h>

int main(void)
{
    int RA, RB, RC,
        PA, PB, PC, PSR;

    PSR = 0;

    scanf("%d %d %d %d %d %d", &RA, &RB, &RC, &PA, &PB, &PC);

    if (RA < PA) {
        PSR = PSR + (PA - RA);
    }

    if (RB < PB) {
        PSR = PSR + (PB - RB);
    }

    if (RC < PC) {
        PSR = PSR + (PC - RC);
    }

    printf("%d\n", PSR);

    return 0;
}