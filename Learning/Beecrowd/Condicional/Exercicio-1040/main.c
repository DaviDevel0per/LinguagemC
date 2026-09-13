#include <stdio.h>

int main() {
    const int Peso1 = 2, Peso2 = 3, Peso3 = 4, Peso4 = 1;

    double N1, N2, N3, N4, Media, NotaExame;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    Media = (N1 * Peso1 + N2 * Peso2 + N3 * Peso3 + N4 * Peso4) / (Peso1 + Peso2 + Peso3 + Peso4);

    printf("Media: %.1lf\n", Media);

    if (Media >= 7.0) printf("Aluno aprovado.\n");
        else if (Media < 5.0) printf("Aluno reprovado.\n");
            else if (Media <= 6.9) {
                printf("Aluno em exame.\n");

                scanf("%lf", &NotaExame);

                printf("Nota do exame: %.1lf\n", NotaExame);

                Media = (NotaExame + Media) / 2;

                if (Media >= 5.0) printf("Aluno aprovado.\n");
                else printf("Aluno reprovado.\n");
                
                printf("Media final: %.1lf\n", Media);
            }
};