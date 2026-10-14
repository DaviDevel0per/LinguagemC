#include <stdio.h>
#include <math.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= m; i++)
    {   
        if (i % n == 0)
        {
            printf("%d", i);
            printf("\n");
        }
        else
            printf("%d ", i);
    }
    
    return 0;
}