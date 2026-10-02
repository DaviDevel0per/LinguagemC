#include <stdio.h>

int main(void)
{
    int A1, A2, A3, M1, M2, M3, Minutos;

    scanf("%d %d %d", &A1, &A2, &A3);
    
    // Maquina Andar 1
    M1 = A2 * 2 + A3 * 4;
    
    // Maquina andar 2
    M2 = A1 * 2 + A3 * 2;

    // Maquina andar 3
    M3 = A2 * 2 + A1 * 4;

    if (M1 > M2 || M1 > M3) {
        // M1 nao é o menor

        if (M2 < M3) printf("%d\n", M2); // M2 É O MENOR
        else printf("%d\n", M3); // M3 é o menor
    }
    else printf("%d\n", M1);
    

    return 0;
}