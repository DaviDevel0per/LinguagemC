#include <stdio.h>

int main() {
    int n, c, nf;
    c = 0;

    scanf("%d", &n);

    nf = n * 4;

    for (int i = 0; i < nf; i++)
    {   
        if (c >= 3)
        {   
            c = 0;
            printf("PUM\n");

            continue;
        }

        if (i == nf - 1)
        {
            printf("%d ", i + 1);
            printf("PUM\n");
            continue;
        }

        printf("%d ", i + 1);

        c++;
    }
    
    return 0;
}