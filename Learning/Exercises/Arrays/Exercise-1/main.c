#include <stdio.h>

int main() {
    int PrimeiroArray[5] = {15, 30, 45, 60, 75};

    PrimeiroArray[0] = 100;
    PrimeiroArray[4] = 0;

    printf("%d e %d sao respectivamente o primeiro e o ultimo valor de um array.\n", PrimeiroArray[0], PrimeiroArray[4]);

    return 0;
}