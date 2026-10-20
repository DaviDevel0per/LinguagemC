#include <stdio.h>

int main() {
    int N, VV, V;

    while (scanf("%d", &N) != EOF)
    {   
        VV = 0;

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &V);

            if (V == 1)
                VV++;
            
        }

        if (VV >=  N * (2/3.0))
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
    }

    return 0;
}