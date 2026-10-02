#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
                                   
void gotoxy(int x, int y);  // posiciona o cursor na tela

void Janela				 // Desenha as linha da janela
	(int Col, int Lin, int Colunas, int Linhas, char Char);
	
int LerOpcao(int x);

void LinhaHorizontal     // Desenha linha horizontal
	(int Col, int Lin, int Colunas, char Char);  

void LinhaVertical		 // Desenha linha Vertical
	(int Col, int Lin, int Colunas, int Linhas, char Char); 

void TextoJanela(); 	// Escreve os textos da janela

int ValidarNumero(int Num, int Inf, int Sup);

int main()
   { 
    int Opcao, Col, Lin, Colunas, Linhas;
	char  Char;
	
    setlocale(LC_ALL, "");
    system("color F0");
    system("MODE con cols=90 lines=25");
    
    // Início do programa
  	do
		{
		system("cls");
		Janela(Col, Lin, Colunas, Linhas, Char);
		
	// Corpo do programa	

    int Placa;
	int MesDePag;
	char Meses[][12] = {
		"Janeiro",
		"Fevereiro",
		"Março",
		"Abril",
		"Maio",
		"Junho",
		"Julho",
		"Agosto",
		"Setembro",
		"Outubro",
		"Novembro",
		"Dezembro"
	};

	gotoxy(10, 7);
	printf("Digite os digitos da placa.........: ");

	scanf("%d", &Placa);
	Placa = ValidarNumero(Placa, 0, 9999);
	
	MesDePag = ValidarNumero(Placa % 100, 0, 12);
	
	gotoxy(10, 16);

	printf("O motorista deve pagar o IPVA no mês de %s", Meses[MesDePag - 1]);
    
    // Fim do programa
		
		Opcao = LerOpcao(Opcao);
		}
		while (Opcao == 1); // Fim do Laço de repetição
	
	system("cls");
	system("pause>null");
	
	} // Fim da main()
		
int ValidarNumero(int Num, int Inf, int Sup) {
	while (Num < Inf || Num > Sup)
	{	
		gotoxy(47, 7);
		printf("Valor inserido incorreto.");

		system("pause>null");

		gotoxy(47, 7);
		for (int i = 0; i < 25; i++) printf(" ");
		gotoxy(47, 7);

		scanf("%d", &Num);
	}

	return Num;
};

void gotoxy(int x, int y) // (-, 8) -> Meio da tela de ENTRADA | (-, 17) -> Meio da tela de SAIDA
	{
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
	}   
			
void Janela(int Col, int Lin, int Colunas, int Linhas, char Char)
	{	
	Col 	= 1;
	Lin 	= 1;
	Char    = '=';
	Colunas = 90;
	LinhaHorizontal(Col, Lin, Colunas, Char);
	Lin = 4;
	LinhaHorizontal(Col, Lin, Colunas, Char);
	Lin = 6;
	LinhaHorizontal(Col, Lin, Colunas, Char);
	Lin = 12;
	LinhaHorizontal(Col, Lin, Colunas, Char);
	Lin = 20;
	LinhaHorizontal(Col, Lin, Colunas, Char);
	Lin = 22;
	LinhaHorizontal(Col, Lin, Colunas, Char);
	Lin = 24;
	LinhaHorizontal(Col, Lin, Colunas, Char);
	Lin      = 1;
	Linhas  = 24;
	Colunas = 90;
	Char = '*';
	LinhaVertical(Col, Lin, Colunas, Linhas, Char);
	TextoJanela();
	
	}

int LerOpcao(int y)
	{
	gotoxy(10,23);
	scanf ("%d", &y);
		
	// Leitura e validação da Opção
	while (y < 1 || y > 2)
		{
		gotoxy(10,21);
		printf ("Opção inválida. Tecle enter");
		system("pause>null");
		gotoxy(10,23); 
		printf (" ");
		gotoxy(10,21);
		for (int i=1; i<=27; i++)
			printf (" ");
		gotoxy(10,23);
		scanf ("%d", &y);
		}
	return y;	
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
		gotoxy(Col,Lin+1);  
		printf ("%c", Char);  
		gotoxy(Colunas,Lin+i); 
		printf ("%c", Char);; 
		}
	}

	
void TextoJanela()
	{
	gotoxy(28,2);
	printf ("CMP1046 - LABORATÓRIO DE PROGRAMAÇÃO");
	gotoxy(32,3);
	printf ("Prof: Aníbal Vicente Vieira");
	gotoxy(43,5);
	printf ("TÍTULO");
	gotoxy(43,10);
	// printf ("ENTRADA");
	gotoxy(43,17);
	// printf ("SAÍDA");
	gotoxy(4,21);
	printf ("Mens [");
	gotoxy(88,21);
	printf ("]");
	gotoxy(3,23);
	printf ("Opção [  ]  1 - Repetir  2 - Encerrar");
	}
