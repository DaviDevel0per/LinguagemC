#include <stdio.h>

/*

- cada salto recebe um grau de dificuldade e é avaliado por sete juízes
- a cada salto, juizes mostram as notas
- cotado entre 0 e 10 pontos
- depois das notas serem apresentadas, a nota mais alta e baixa são descartadas
- o restante é somado e multi pelo grau de dificuldade do salto (em torno de 1,2 e 3,8)

Ler Numero de Competidores (N), Nome (Nome), Grau de Dificuldade (GD) e 7 Notas para cada Competidor

// Ler competidores

- Notas[7] = {3, 4, 5, 5, 5, 6, 9}

for (int i = 0; i < N; i++)
{   // Competidor

    - Zerar MenorN e MaiorN
    - Ler Nome, GD

    for (int i2 = 0; i2 < 7; i2++)
    {   // Lendo 7 notas

        - Ler notas aqui

        // Salvando posição da Maior Nota e Menor Nota

        if (Notas[i2] > MaiorN)
        {
            MaiorN = i2;
        }
        
        if (Notas[i2] < MenorN)
        {
            MenorN = i2;
        }
    }


    // Pegando nota mais alta e  menor e zerando
    Notas[MaiorN] = 0;
    Notas[MenorN] = 0;

    // Somando as Notas

    for (int i = 0; i < 7; i++)
    {
        Resultado = Resultado + Notas[i];
    }

    Resultado = Resultado * GD;

    printf("%.2lf", Resultado);
}


*/

int main() {
    int N, iMaior, iMenor;
    double Notas[7], GD, Resultado, MenorN = 1000000, MaiorN = 0;
    char Nome[50];

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {   // Competidor
        Resultado = 0;
        iMenor = 0;
        iMaior = 0;

        scanf("%s %lf %lf", Nome, &GD, &Notas[0]);

        MenorN = Notas[0];
        MaiorN = Notas[0];

        for (int i2 = 1; i2 < 7; i2++)
        {   // Lendo 7 notas

            scanf("%lf", &Notas[i2]);
            Resultado = Resultado + Notas[i2];

            // Salvando posição da Maior Nota e Menor Nota

            if (Notas[i2] > MaiorN)
            {
                MaiorN = Notas[i2];
                iMaior = i2;
            }
            
            if (Notas[i2] < MenorN)
            {
                MenorN = Notas[i2];
                iMenor = i2;
            }
        }

        // Pegando nota mais alta e  menor e zerando
        Notas[iMaior] = 0;
        Notas[iMenor] = 0;

        // Calculando resultado

        Resultado = Resultado - MaiorN;
        Resultado = Resultado - MenorN;

        Resultado = Resultado * GD;

        printf("%s %.2lf\n", Nome, Resultado);
    }

    return 0;
}