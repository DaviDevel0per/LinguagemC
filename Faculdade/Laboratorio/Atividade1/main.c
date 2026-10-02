// Diretivas

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

// Prototipo de Funcao
void Cabecalho();

// Funcao Main
int main()
{	
	// Comandos Iniciais

	setlocale(LC_ALL, "Portuguese_Brazil");

	system("cls");
	Cabecalho();
	system("color F0");

	// Inicio do codigo
	char Opcao = 'S';

	while (Opcao != 'N')
	{	
		system("cls");
		Cabecalho();
		
		char NomeAluno[5][20];
		int NumeroTurma[5], QtdeAulas[5], QtdeFaltas[5], i;

		// Lendo alunos
		for (i = 0; i < 5; i++)
		{
			printf("Digite o nome do %d° aluno................: ", i + 1);

			scanf("%s", NomeAluno[i]);

			printf("Digite o numero da turma do aluno.........: ");

			scanf("%d", &NumeroTurma[i]);

			printf("Digite a quantidade de aulas totais.......: ");

			scanf("%d", &QtdeAulas[i]);

			printf("Digite a quantidade de faltas do aluno....: ");

			scanf("%d", &QtdeFaltas[i]);

			system("cls");
			Cabecalho();
		}

		// Imprimindo nome e % de faltas

		for (i = 0; i < 5; i++)
		{	
			int PrctFaltas;
			
			PrctFaltas = (QtdeFaltas[i] / QtdeAulas[i]) * 100;
			printf( "Aluno....................: %s\n"
					"Porcentagem de Faltas....: %d\n",
					NomeAluno[i], PrctFaltas);

			if (PrctFaltas < 25) printf("Aluno Aprovado\n\n");
				else printf("Aluno Reprovado\n\n");
		}

		printf("\nDeseja continuar? ( S / N ): ");

		scanf(" %c", &Opcao);
		Opcao = toupper(Opcao);
	}
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
	printf( "\nPontifícia Universidade Católica-GO"
			"\nEscola Politécnica e de Artes"
			"\nDisciplina: CMP1046 - Laboratório"
			"\nProfessor: Aníbal Vieira"
			"\nAluno: Daví Bento Jubé\n\n"
	);
	
	return;	
};

