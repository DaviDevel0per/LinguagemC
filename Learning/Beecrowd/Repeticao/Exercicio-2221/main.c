#include <stdio.h>

int main() {
    int T, B, Ai, Di, Li, Ai2, Di2, Li2;
    double VG1, VG2;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {   // Instancia
        scanf("%d %d %d %d", &B, &Ai, &Di, &Li);
        scanf("%d %d %d", &Ai2, &Di2, &Li2);
        
        VG1 = (Ai + Di) / 2;
        VG2 = (Ai2 + Di2) / 2;

        if (Li % 2 == 0)
            VG1 += B;

        if (Li2 % 2 == 0)
            VG2 += B;

        if (VG1 == VG2)
            printf("Empate\n");
        else if (VG1 > VG2)
        {
            printf("Dabriel\n");
        }
        else
        {
            printf("Guarte\n");
        }
        
    }

    return 0;
}