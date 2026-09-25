#include <stdio.h>
#include <math.h>

/*



*/

int main(void)
{   
    int DI, HI, MI, SI, DF, HF, MF, SF, Duracao;

    scanf(  "%d"
            "%d %d %d"
            "%d"
            "%d %d %d", &DI, &HI, &MI, &SI, &DF, &HF, &MF, &SF
    );

    Duracao = ((DF - DI) * 86400) + ((HF - HI) * 3600) + (MF - MI) * 60 + (SF - SI);

    printf( "%d dia(s)\n"
            "%d hora(s)\n"
            "%d minuto(s)\n"
            "%d segundo(s)\n", Duracao / 86400, (Duracao % 86400) / 3600, ((Duracao % 86400) % 3600) / 60, ((Duracao % 86400) % 3600) % 60
    );
    
    return 0;
}