#include <stdio.h>
#include <math.h>

int main() {
    int Entrada;

    scanf("%d", &Entrada);

    for (int i = 1; i <= Entrada; i++)  
       if (i % 2 == 0) printf("%d^2 = %.0lf\n", i, pow(i, 2));
    
    return 0;
};