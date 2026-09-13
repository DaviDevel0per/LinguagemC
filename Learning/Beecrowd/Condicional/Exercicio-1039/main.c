#include <stdio.h>

int main() {
    int Codigo, Quantidade;
    double ValorTotal;

    scanf("%d %d", &Codigo, &Quantidade);

    if (Codigo > 0 && Codigo < 6) {
        if (Codigo == 1) {
            ValorTotal = 4.0*Quantidade;
        } else if (Codigo == 2) {
            ValorTotal = 4.5*Quantidade;
        } else if (Codigo == 3) {
            ValorTotal = 5.0*Quantidade;
        } else if (Codigo == 4) {
            ValorTotal = 2.0*Quantidade;
        } else if (Codigo == 5) {
            ValorTotal = 1.5*Quantidade;
        }
    }

    printf("Total: R$ %.2lf\n", ValorTotal);

    return 0;
};