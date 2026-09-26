#include <stdio.h>
#include <string.h>

int main(void)
{
    char Classe1[50], Classe2[50], Classe3[50];
    
    scanf("%s %s %s", &Classe1, &Classe2, &Classe3);

    if (strcmp(Classe1, "vertebrado") == 0) {
        if (strcmp(Classe2, "ave") == 0) {
            if (strcmp(Classe3, "carnivoro") == 0) printf("aguia\n");
            else if (strcmp(Classe3, "onivoro") == 0) printf("pomba\n");
        }
        else if (strcmp(Classe2, "mamifero") == 0){
            if (strcmp(Classe3, "herbivoro") == 0) printf("vaca\n");
            else if (strcmp(Classe3, "onivoro") == 0) printf("homem\n");
        }
    }

    if (strcmp(Classe1, "invertebrado") == 0) {
        if (strcmp(Classe2, "inseto") == 0) {
            if (strcmp(Classe3, "hematofago") == 0) printf("pulga\n");
            else if (strcmp(Classe3, "herbivoro") == 0) printf("lagarta\n");
        }
        else if (strcmp(Classe2, "anelideo") == 0){
            if (strcmp(Classe3, "hematofago") == 0) printf("sanguessuga\n");
            else if (strcmp(Classe3, "onivoro") == 0) printf("minhoca\n");
        }
    }

    return 0;
}