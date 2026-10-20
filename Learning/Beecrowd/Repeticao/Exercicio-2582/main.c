#include <stdio.h>

int main() {
    int C, X, Y, iM;
    char Musics[11][15] = {
        "PROXYCITY",
        "P.Y.N.G.",
        "DNSUEY!",
        "SERVERS",
        "HOST!",
        "CRIPTONIZE",
        "OFFLINE DAY",
        "SALT",
        "ANSWER!",
        "RAR?",
        "WIFI ANTENNAS",
    };

    scanf("%d", &C);

    for (int i = 0; i < C; i++)
    {   
        scanf("%d %d", &X, &Y);

        iM = X + Y;

        printf("%s\n", Musics[iM]);
    }

    return 0;
}