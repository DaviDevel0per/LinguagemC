// Bibliotecas

#include <stdio.h>
#include <locale.h>
#include <windows.h>

// Protótipo de Função de Cabeçalho
void Cabecalho();

// Função Main
int main()
{   
    // Constantes
    const int NumeroMaximo = 20;

    // Declarando variáveis
    int Numero = 1;

    // Comandos de sistema
    setlocale(LC_ALL, "portuguese");

    // Funções de cabeçalho
    Cabecalho();

    // While

    printf("Numeros impares com while:\n");

    while (Numero < NumeroMaximo)
    {   
        printf("%d ", Numero);
        Numero = Numero + 2;
    }

    // Do While

    printf("\n\nNumeros impares com do while:\n");

    Numero = 1;

    do
    {
        printf("%d ", Numero);
        Numero = Numero + 2;
    } while (Numero < NumeroMaximo);
    
    // For

    printf("\n\nNumeros impares com for:\n");

    for (Numero = 1; Numero < NumeroMaximo; Numero = Numero + 2)
    {
        printf("%d ", Numero);
    }

    return 0;
};

// Função de Cabeçalho
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