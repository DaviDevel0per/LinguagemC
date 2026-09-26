// Diretivas

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

/*

Escreva um programa para:


*/

// Prototipo de Funcao
void Cabecalho();

// Funcao Main
int main()
{	
	// Declarando Variáveis
	double Numeros[5], Media;

	for (int i = 0; i < 5; i++) {
		scanf("%lf", Numeros[i]);

		Media = Media + Numeros[i];
	}
		
	Media = Media / 5;

	return 0;
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
	printf( "\n Pontifícia Universidade Católica-GO"
			"\n Escola Politécnica e de Artes"
			"\n Disciplina: CMP1046 - Laboratório"
			"\n Professor: Aníbal Vieira"
			"\n Aluno: Daví Bento Jubé\n\n"
	);
	
	return;	
};

