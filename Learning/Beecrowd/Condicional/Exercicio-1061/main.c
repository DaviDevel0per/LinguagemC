#include <stdio.h>

int main(void)
{
    int DI, HI, MI, SI;
    int DF, HF, MF, SF;

    int Dias, Horas, Mins, Segs;

    scanf("Dia %d", &DI);
    scanf("%d : %d : %d", &HI, &MI, &SI);

    scanf(" Dia %d", &DF);
    scanf("%d : %d : %d", &HF, &MF, &SF);

    Dias = DF - DI;
    Horas = HF - HI;
    Mins = MF - MI;
    Segs = SF - SI;

    if (Segs < 0) {
        Segs += 60;
        Mins--;
    }

    if (Mins < 0) {
        Mins += 60;
        Horas--;
    }

    if (Horas < 0) {
        Horas += 24;
        Dias--;
    }

    printf("%d dia(s)\n", Dias);
    printf("%d hora(s)\n", Horas);
    printf("%d minuto(s)\n", Mins);
    printf("%d segundo(s)\n", Segs);

    return 0;
}