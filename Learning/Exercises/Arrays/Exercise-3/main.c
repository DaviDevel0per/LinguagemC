#include <stdio.h>

int main() {
    int Array[4] = {10, 20, 30, 40};

    int VariavelTemp;

    VariavelTemp = Array[0];

    Array[0] = Array[3];

    Array[3] = VariavelTemp;

    printf("%d, %d\n", Array[0], Array[3]);

    return 0;
}