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
    char Nome[50];
    int Sexo;
    double SalarioAtual, ValorAumento, SalarioNovo;

    // Início do programa
    while (Opcao != 'N')
    {   
        system("cls");
        Janela(1, 1, 90, 28, '=');

        // Imprimindo Instruncoes

        gotoxy(5, 9);
        printf("Nome............[                           ]");
        gotoxy(5, 10);
        printf("Sexo............[ ]");
        gotoxy(5, 11);
        printf("Salário Atual...[ R$      ] (R$ 500,00 a R$ 5.000,00)");

        // Lendo entrada

        gotoxy(23,9);
        scanf("%s", Nome);
        gotoxy(22,10);
        scanf("%d", &Sexo);

        while (Sexo < 1 || Sexo > 2)
        {
            gotoxy(10, 25);
            printf("Valor inserido inválido, tente novamente.");
            gotoxy(22, 10);
            printf(" ");
            gotoxy(22, 10);
            scanf("%d", &Sexo);
            gotoxy(10, 25);
            printf("                                                      ");
        }

        gotoxy(26,11);
        scanf("%lf", &SalarioAtual);

        while (SalarioAtual < 500 || SalarioAtual > 5000)
        {   
            gotoxy(10, 25);
            printf("Valor inserido inválido, tente novamente.");
            gotoxy(26, 11);
            printf("     ");
            gotoxy(26, 11);
            scanf("%lf", &SalarioAtual);
            gotoxy(10, 25);
            printf("                                                      ");
        }

        // Calculando aumento salarial

        if (SalarioAtual <= 900)
        {
            if (Sexo == 1) SalarioNovo = SalarioAtual * 1.2;
                else SalarioNovo = SalarioAtual * 1.25;
        }
        else if (SalarioAtual <= 1500)
        {
            if (Sexo == 1) SalarioNovo = SalarioAtual * 1.15;
                else SalarioNovo = SalarioAtual * 1.2;
        }
        else if (SalarioAtual <= 2000)
        {
            if (Sexo == 1) SalarioNovo = SalarioAtual * 1.1;
                else SalarioNovo = SalarioAtual * 1.15;
        }
        else
        {
            if (Sexo == 1) SalarioNovo = SalarioAtual * 1.05;
                else SalarioNovo = SalarioAtual * 1.1;
        }

        ValorAumento = SalarioNovo - SalarioAtual;

        // Saída

        gotoxy(5, 18);
        printf("Valor Aumento...[ R$ %.2lf ]", ValorAumento);
        gotoxy(5, 19);
        printf("Salário Novo....[ R$ %.2lf ]", SalarioNovo);

        // Lendo Opcao de continuidade
        gotoxy(5,27);
        printf("Deseja continuar? ( S / N ): ");

        scanf(" %c", &Opcao);
        Opcao = toupper(Opcao);
    // Fim do programa

    } // Fim do Laço de repetição

    // Limpando tela
    system("cls");

    return 0;
   }

void Cabecalho()
{
    gotoxy(3,2);
    printf("Pontifícia Universidade Católica-GO");

    gotoxy(3,3);
    printf("Escola Politécnica e de Artes");

    gotoxy(3,4);
    printf("Disciplina: CMP1046 - Laboratório");

    gotoxy(3,5);
    printf("Professor: Aníbal Vieira");

    gotoxy(3,6);
    printf("Aluno: Daví Bento Jubé");

    return;
}

void gotoxy(int x, int y) // posiciona o cursor na tela
    {
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
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
    Lin = 14;
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
    gotoxy(29,8);
    printf ("CÁLCULO DE AUMENTO SALARIAL");
    gotoxy(4,25);
    printf ("Mens [");
    gotoxy(88,25);
    printf ("]");
    }
