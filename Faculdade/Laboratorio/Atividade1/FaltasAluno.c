// Diretivas
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <string.h>
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

int ValidarNumero(int Num, int Inf, int Sup);

// Funcao Main
int main()
   {
    // Comandos Iniciais
    setlocale(LC_ALL, "Portuguese_Brazil");

    system("color F0");
    system("MODE con cols=100 lines=30");
    system("cls");
    Janela(1, 1, 90, 26, '=');

    // Inicio do codigo
    char Opcao = 'S';

    // Início do programa
    while (Opcao != 'N')
        {
        system("cls");
        Janela(1, 1, 90, 26, '=');

    // Corpo do programa

        char NomeAluno[5][20];
        int NumeroTurma[5], QtdeAulas[5], QtdeFaltas[5], i;

        // Lendo alunos
        for (i = 0; i < 5; i++)
            {
            // Posiciona os campos na area de entrada da janela
            gotoxy(5,11);
            printf("Digite o nome do %d° aluno.................: ", i + 1);

            scanf("%s", NomeAluno[i]);

            gotoxy(5,12);
            printf("Digite o numero da turma do aluno.........: ");

            scanf("%d", &NumeroTurma[i]);

            gotoxy(5,13);
            printf("Digite a quantidade de aulas totais.......: ");

            scanf("%d", &QtdeAulas[i]);

            gotoxy(5,14);
            printf("Digite a quantidade de faltas do aluno....: ");

            scanf("%d", &QtdeFaltas[i]);

            system("cls");
            Janela(1, 1, 90, 26, '=');
            }

        // Imprimindo nome e % de faltas
        for (i = 0; i < 5; i++)
            {
            int PrctFaltas;

            PrctFaltas = (QtdeFaltas[i] * 100.0) / QtdeAulas[i];

            // Cada aluno ocupa uma linha, da linha 16 até a 20.
            gotoxy(5,16 + i);
            printf("Aluno: %-19s", NomeAluno[i]);

            gotoxy(33,16 + i);
            printf("Porcentagem de Faltas: %d%%", (int)PrctFaltas);

            gotoxy(65,16 + i);
            if ((int)PrctFaltas < 25) printf("Aluno Aprovado");
                else printf("Aluno Reprovado");
            }

        gotoxy(5,25);
        printf("Deseja continuar? ( S / N ): ");

        scanf(" %c", &Opcao);
        Opcao = toupper(Opcao);

    // Fim do programa

        } // Fim do Laço de repetição

    // Limpando tela
    system("cls");
   };

int ValidarNumero(int Num, int Inf, int Sup) {
    while (Num < Inf || Num > Sup)
    {
        printf("\nValor inserido incorreto. Digite outro número: ");

        scanf("%d", &Num);
    }

    return Num;
};

void Cabecalho()
{
    // Mantem os textos do cabeçalho dentro das bordas da janela
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
};

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
    Lin = 8;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin = 10;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin = 15;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin = 22;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin = 24;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin = 26;
    LinhaHorizontal(Col, Lin, Colunas, Char);
    Lin      = 1;
    Linhas  = 26;
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
    gotoxy(32,9);
    printf ("CONTROLE DE FALTAS");
    gotoxy(4,23);
    printf ("Mens [");
    gotoxy(88,23);
    printf ("]");
    }