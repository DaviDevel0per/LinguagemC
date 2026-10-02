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
    int QtdeAlunos = 0, QtdeAcima200 = 0, QtdeRendaMaior = 0;

    double RendaPessoal, RendaFamiliar, Alimentacao, OutrasDespesas;
    double RendaTotal, PrctAlimentacao, PrctOutras, PrctTotal;
    double PrctAcima200;

    // Início do programa
    while (Opcao != 'N')
        {
        system("cls");
        Janela(1, 1, 90, 28, '=');

    // Corpo do programa

        gotoxy(5,9);
        printf("DADOS DO ALUNO %d", QtdeAlunos + 1);

        gotoxy(5,10);
        printf("Renda pessoal.................: R$ ");
        scanf("%lf", &RendaPessoal);

        gotoxy(5,11);
        printf("Renda familiar................: R$ ");
        scanf("%lf", &RendaFamiliar);

        gotoxy(5,12);
        printf("Total gasto com alimentacao...: R$ ");
        scanf("%lf", &Alimentacao);

        gotoxy(5,13);
        printf("Total gasto com outras despesas: R$ ");
        scanf("%lf", &OutrasDespesas);

        // Acumula as quantidades usadas no resultado geral.
        QtdeAlunos++;

        if (OutrasDespesas > 200)
            QtdeAcima200++;

        if (RendaPessoal > RendaFamiliar)
            QtdeRendaMaior++;

        RendaTotal = RendaPessoal + RendaFamiliar;

        gotoxy(5,16);
        printf("RESULTADOS DO ALUNO %d", QtdeAlunos);

        gotoxy(5,18);
        printf("Soma das rendas................: R$ %.2lf", RendaTotal);

        // Calcula os percentuais sobre a soma das duas rendas.
        if (RendaTotal > 0)
            {
            PrctAlimentacao = (Alimentacao * 100.0) / RendaTotal;
            PrctOutras = (OutrasDespesas * 100.0) / RendaTotal;
            PrctTotal = ((Alimentacao + OutrasDespesas) * 100.0) / RendaTotal;

            gotoxy(5,19);
            printf("Porcentagem com alimentacao....: %.2lf%%", PrctAlimentacao);

            gotoxy(5,20);
            printf("Porcentagem com outras despesas: %.2lf%%", PrctOutras);

            gotoxy(5,21);
            printf("Porcentagem com ambos os gastos: %.2lf%%", PrctTotal);
            }
        else
            {
            // Evita dividir por zero quando o aluno nao possui renda.
            gotoxy(5,19);
            printf("Percentuais nao calculados: a soma das rendas deve ser positiva.");
            }

        gotoxy(5,27);
        printf("Deseja cadastrar outro aluno? ( S / N ): ");

        scanf(" %c", &Opcao);
        Opcao = toupper(Opcao);

    // Fim do programa

        } // Fim do Laço de repetição

    // Mostra os resultados gerais depois do ultimo cadastro.
    PrctAcima200 = (QtdeAcima200 * 100.0) / QtdeAlunos;

    system("cls");
    Janela(1, 1, 90, 28, '=');

    gotoxy(5,10);
    printf("CADASTRO FINALIZADO");

    gotoxy(5,12);
    printf("Quantidade de alunos: %d", QtdeAlunos);

    gotoxy(5,16);
    printf("RESULTADOS GERAIS");

    gotoxy(5,18);
    printf("Alunos com outras despesas acima de R$ 200,00: %.2lf%%",
           PrctAcima200);

    gotoxy(5,20);
    printf("Alunos com renda pessoal maior que a familiar: %d",
           QtdeRendaMaior);

    gotoxy(5,27);
    printf("Pressione qualquer tecla para encerrar.");
    getch();

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
    printf ("RENDAS E DESPESAS DOS ALUNOS");
    gotoxy(4,25);
    printf ("Mens [");
    gotoxy(88,25);
    printf ("]");
    }
