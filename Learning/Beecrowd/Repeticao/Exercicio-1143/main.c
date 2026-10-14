#include <stdio.h>
#include <math.h>

/*



*/


int main() {
    int n, aux = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {   
        printf("%d ", i);
        aux = i*i;
        printf("%d ", aux);
        aux = aux * i;
        printf("%d\n", aux);
    }
    
    return 0;
}