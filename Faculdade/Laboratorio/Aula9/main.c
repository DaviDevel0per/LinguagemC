// Bibliotecas

#include <stdio.h>
#include <locale.h>
#include <windows.h>

// Protótipo de Função de Cabeçalho
void Cabecalho();

// Função Main
int main()
{  
    // Declarando variáveis

    int Numero1, Numero2, Maior, Menor, Soma, Diferenca, Produto, Quociente;
    char Opcao;

    // Configurações do sistema
    
    setlocale(LC_ALL, "portuguese");
    system("color F0");

    // Inicio do loop
    while (Opcao != 'N')
    {
        // Imprimindo cabeçalho

        Cabecalho();

        // Lendo Primeiro e Segundo número

        printf("Digite o primeiro número (1 a 99): ");

        scanf("%d", &Numero1);
        
        if (Numero1 > 99 || Numero1 < 1)
        {
            printf("Numero invalido. Aperte Enter para tentar novamente.\n");
            
            system("pause>null");

            system("cls");

            continue;
        }

        printf("Digite o segundo número (1 a 99): ");

        scanf("%d", &Numero2);

        if (Numero2 > 99 || Numero2 < 1)
        {
            printf("Numero invalido. Aperte Enter para tentar novamente.\n");
            
            system("pause>null");

            system("cls");

            continue;
        }

        // Caso o Numero 1 e Numero 2 esteja entre 1 e 99

        if (Numero1 < Numero2)
        {   
            Numero2 = Numero1 + Numero2; // Salvando a soma dos dois numeros na variáveil "Numero2"
            Numero1 = Numero2 - Numero1; // Transformando Numero1 em Numero2
            Numero2 = Numero2 - Numero1; // Transformando Numero2 em Numero1
        }

        // Realizando as 4 operações

        Soma = Numero1 + Numero2;
        Diferenca = Numero1 - Numero2;
        Produto = Numero1 * Numero2;
        Quociente = Numero1 / Numero2;

        // Imprimindo as 4 operações

        printf( "\nSoma:..........%d\n"
                "Diferenca:.....%d\n"
                "Produto:.......%d\n"
                "Quociente:.....%d\n\n",
                Soma, Diferenca, Produto, Quociente
            );

        // Lendo opção de continuar ou não

        printf("Deseja continuar? (S/N): ");

        scanf("%s", &Opcao);

        Opcao = toupper(Opcao);

        system("cls");
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