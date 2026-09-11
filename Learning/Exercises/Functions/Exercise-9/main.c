#include <stdio.h>

int calcularCura(int VidaAtual, int Cura, int VidaMaxima) {
    VidaAtual = VidaAtual + Cura;
    if (VidaAtual > VidaMaxima) return VidaMaxima;

    return VidaAtual;
}

int main(void) {
    printf("%d", calcularCura(20, 100, 100));

    return 0;
}