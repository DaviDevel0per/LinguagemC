#include <stdio.h>

int main() {
    int Entrada;

    scanf("%d", &Entrada);

    for (int i = 1; i <= Entrada; i++)  
       if (i % 2 > 0) printf("%d\n", i);
    
    return 0;
};