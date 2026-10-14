#include <stdio.h>
#include <math.h>

/*



*/


int main() {
    int n, x, y;
    double div;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        if (y == 0)
        {
            printf("divisao impossivel\n");
            continue;
        }

        div = (double)x / y;

        printf("%.1lf\n", div);
    }
    
    return 0;
}