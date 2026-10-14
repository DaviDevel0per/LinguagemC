#include <stdio.h>

int main() {
    int valor, valorMaior, posMaior;

    valorMaior = 0;
    posMaior = 0;

    for (int i = 0; i < 100; i++)
    {   
        scanf("%d", &valor);

        if (valorMaior < valor)
        {
            valorMaior = valor;
            posMaior = i + 1;
        }
    }

    printf("%d\n%d\n", valorMaior, posMaior);
    
    return 0;
}