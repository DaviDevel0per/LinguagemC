#include <stdio.h>
#include <math.h>

int maiorDeTres(int a, int b, int c) {
    int maiorAB = ((a + b) + abs(a - b))/2;
    int maiorNumero = ((maiorAB + c) + abs(maiorAB - c))/2;

    return maiorNumero;
}

int main(void) {
    printf("%d", maiorDeTres(-35, -37, -34));

    return 0;
}