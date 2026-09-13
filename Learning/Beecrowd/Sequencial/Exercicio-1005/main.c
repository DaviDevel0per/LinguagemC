#include <stdio.h>

int main()
{
    // Constantes

    const double PesoA = 3.5;
    const double PesoB = 7.5;

    // Variáveis

    double A, B, Media;

    scanf("%lf%lf", &A, &B);

    Media = (A * PesoA + B * PesoB) / (PesoA + PesoB);

    printf("MEDIA = %.4lf \n", Media);
};