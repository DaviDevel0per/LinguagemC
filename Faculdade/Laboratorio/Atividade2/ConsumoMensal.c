// Diretivas
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>

// Prototipo de Funcao
void Cabecalho();

void gotoxy(int x, int y); // posiciona o cursor na tela

void Janela              // Desenha as linha da janela
    (int Col, int Lin, int Colunas, int Linhas, char Char);

void LinhaHorizontal     // Desenha linha horizontal
    (int Col, int Lin, int Colunas, char Char);

void LinhaVertical       // Desenha linha Vertical
    (int Col, int Lin, int Colunas, int Linhas, char Char);

void TextoJanela();      // Escreve os textos da janela

// Funcao Main
int main()
   {
    // Comandos Iniciais
    setlocale(LC_ALL, "Portuguese_Brazil");

    system("color F0");
    system("MODE con cols=100 lines=30");

    char Opcao = 'S';

    // In�cio do programa
    while (Opcao != 'N')
        {
        system("cls");
        Janela(1, 1, 90, 28, '=');

    // Corpo do programa

        int NumeroConsumidor[5], TipoConsumidor[5], i;
        int QtdeResidencial = 0;

        double Consumo[5], CustoTotal[5];
        double TotalResidencial = 0, TotalComercial = 0;
        double TotalIndustrial = 0, MediaResidencial = 0;

        // Lendo os dados dos cinco consumidores.
        for (i = 0; i < 5; i++)
            {
            gotoxy(5,9);
            printf("CONSUMIDOR %d DE 5", i + 1);

            gotoxy(5,10);
            printf("Numero do consumidor..................: ");
            scanf("%d", &NumeroConsumidor[i]);

            gotoxy(5,11);
            printf("Quantidade de kWh consumidos..........: ");
            scanf("%lf", &Consumo[i]);

            gotoxy(5,12);
            printf("Tipo (1-Resid. / 2-Comerc. / 3-Ind.)..: ");
            scanf("%d", &TipoConsumidor[i]);

            // Aceita somente os tres tipos informados no enunciado
            while (TipoConsumidor[i] < 1 || TipoConsumidor[i] > 3)
                {
                gotoxy(10,25);
                printf("Tipo invalido. Digite 1, 2 ou 3.");

                gotoxy(45,12);
                printf("                                             ");
                gotoxy(45,12);
                scanf("%d", &TipoConsumidor[i]);
                }

            // Calcula o custo individual e acumula o consumo de cada tipo
            if (TipoConsumidor[i] == 1)
                {
                CustoTotal[i] = Consumo[i] * 0.3;
                TotalResidencial = TotalResidencial + Consumo[i];
                QtdeResidencial++;
                }
            else if (TipoConsumidor[i] == 2)
                {
                CustoTotal[i] = Consumo[i] * 0.5;
                TotalComercial = TotalComercial + Consumo[i];
                }
            else
                {
                CustoTotal[i] = Consumo[i] * 0.7;
                TotalIndustrial = TotalIndustrial + Consumo[i];
                }

            system("cls");
            Janela(1, 1, 90, 28, '=');
            }

        // Divide apenas pela quantidade de consumidores residenciais
        if (QtdeResidencial > 0)
            MediaResidencial = TotalResidencial / QtdeResidencial;

        gotoxy(5,9);
        printf("RESULTADOS DOS CINCO CONSUMIDORES");

        gotoxy(5,11);
        printf("Precos por kWh: Residencial R$ 0,30 | Comercial R$ 0,50");

        gotoxy(5,12);
        printf("                Industrial R$ 0,70");

        // Cada consumidor ocupa uma linha na area de saida
        gotoxy(5,14);
        printf("CONSUMIDOR");

        gotoxy(25,14);
        printf("TIPO");

        gotoxy(43,14);
        printf("CONSUMO (kWh)");

        gotoxy(65,14);
        printf("CUSTO TOTAL");

        for (i = 0; i < 5; i++)
            {
            gotoxy(5,15 + i);
            printf("%d", NumeroConsumidor[i]);

            gotoxy(25,15 + i);
            printf("%d", TipoConsumidor[i]);

            gotoxy(43,15 + i);
            printf("%.2lf", Consumo[i]);

            gotoxy(65,15 + i);
            printf("R$ %.2lf", CustoTotal[i]);
            }

        // Mostra os totais de consumo de cada tipo
        gotoxy(5,20);
        printf("Total residencial: %.2lf kWh", TotalResidencial);

        gotoxy(5,21);
        printf("Total comercial..: %.2lf kWh", TotalComercial);

        gotoxy(5,22);
        printf("Total industrial.: %.2lf kWh", TotalIndustrial);

        gotoxy(5,23);
        if (QtdeResidencial > 0)
            printf("Media residencial: %.2lf kWh", MediaResidencial);
        else
            printf("Media residencial: nao ha consumidores do tipo 1.");

        gotoxy(5,27);
        printf("Deseja continuar? ( S / N ): ");

        scanf(" %c", &Opcao);
        Opcao = toupper(Opcao);

    // Fim do programa

        } // Fim do La�o de repeticao

    // Limpando tela
    system("cls");

    return 0;
   }

void Cabecalho()
{
    gotoxy(3,2);
    printf("Pontif�cia Universidade Cat�lica-GO");

    gotoxy(3,3);
    printf("Escola Polit�cnica e de Artes");

    gotoxy(3,4);
    printf("Disciplina: CMP1046 - Laborat�rio");

    gotoxy(3,5);
    printf("Professor: An�bal Vieira");

    gotoxy(3,6);
    printf("Aluno: Dav� Bento Jub�");

    return;
}

void gotoxy(int x, int y) // posiciona o cursor na tela
    {
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD) {x-1,y-1});
    }

void Janela(int Col, int Lin, int Colunas, int Linhas, char Char)
    {
    Col     = 1;
    Lin     = 1;
    Char    = '=';
    Colunas = 90;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin = 7;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin = 13;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin = 24;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin = 26;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin = 28;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin      = 1;
    Linhas  = 28;
    Colunas = 90;
    Char = '*';
    LinhaVertical(Col, Lin, Colunas, Linhas, Char);
    TextoJanela();

    }

void LinhaHorizontal(int Col, int Lin, int Colunas, char Char)
   { gotoxy(Col,Lin);
    for (int i=0; i < Colunas; i++)
        printf ("%c", Char);
   }

void LinhaVertical(int Col, int Lin, int Colunas, int Linhas, char Char)
   {
   for (int i = 1; i < Linhas; i++)
       {
        gotoxy(Col,Lin+i);
        printf ("%c", Char);
        gotoxy(Colunas,Lin+i);
        printf ("%c", Char);
       }
   }


void TextoJanela()
    {
    Cabecalho();
    gotoxy(30,8);
    printf ("ELETRICA S.A. - CONSUMO MENSAL");
    gotoxy(4,25);
    printf ("Mens [");
    gotoxy(88,25);
    printf ("]");
    }
