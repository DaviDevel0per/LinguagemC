// Diretivas

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

/*

Escreva um programa para:
- Ler nome do aluno
- Ler 6 notas(0-10,0)
- Calcular N1 (Media das 3 primeiras)
- Calcular N2 (Media das 3 ultimas)
- Calcular a Media (N1*0.4 + N2*0.6)
- Mostrar nome e media do aluno
- Repetir o programa enquanto quiser

*/

// Prototipo de Funcao
void Cabecalho();

// Funcao Main
int main()
{	
	// Declarando Variáveis
	char NomeDoAluno[50], Opcao;
	
	float	Nota1,
			Nota2,
			Nota3,
			Nota4,
			Nota5,
			Nota6,
		    N1,
			N2,
			Media;
	
	// Configuração de Sistema
	setlocale(LC_ALL, "portuguese");
	
	// Inicio do Loop
	Inicio:
		// Chamando Função de cabeçalho e clear screen
		system("cls");
		Cabecalho();
		
		// Recebendo entrada do Usuário
		printf("Digite os dados abaixo: \n\n");
		
		printf("Nome do aluno: ");
			scanf("%s", &NomeDoAluno);
		printf("Nota 1.......: ");
			scanf("%f", &Nota1);
		printf("Nota 2.......: ");
			scanf("%f", &Nota2);
		printf("Nota 3.......: ");
			scanf("%f", &Nota3);
		printf("Nota 4.......: ");
			scanf("%f", &Nota4);
		printf("Nota 5.......: ");
			scanf("%f", &Nota5);
		printf("Nota 6.......: ");
			scanf("%f", &Nota6);
		
		// Calculando N1, N2 e Media
		N1 = (Nota1+Nota2+Nota3)/3;
		N2 = (Nota4+Nota5+Nota6)/3;
		
		Media = N1*0.4+N2*0.6;
		
		// Imprimindo Média
		printf("\nA média do aluno %s é: %.1f \n", NomeDoAluno, Media);
		
		system("pause>null");
		
		// Repetir o loop caso receba char 'S'
		printf("Deseja continuar? (S/N): ");
		
		scanf("%s", &Opcao);
		
		// Finalizando
		system("cls");
		
		if (Opcao == 'S') // Caso receba 'S' então retorna ao inicio
			goto Inicio; // Indo para o Inicio
			
	return 0;
};

void Cabecalho()
{
	printf( "\n Pontifícia Universidade Católica-GO"
			"\n Escola Politécnica e de Artes"
			"\n Disciplina: CMP1046 - Laboratório"
			"\n Professor: Aníbal Vieira"
			"\n Aluno: Daví Bento Jubé\n\n"
	);
	
	return;	
};

