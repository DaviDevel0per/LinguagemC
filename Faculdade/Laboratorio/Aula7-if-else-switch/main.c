#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <windows.h>

// Protótipo de Função de Cabeçalho
void Cabecalho();

// Função Main
int main()
{   
    // Declarando variáveis
    int Numero;
    char Letra, Repetir;

    // Comandos de sistema
    setlocale(LC_ALL, "portuguese");

    // Inicio do loop de números
    InicioNumero:
        // Imprimindo Cabeçalho
        Cabecalho();

        // Lendo número
        printf("Digite um número de 0 a 9: ");

        scanf("%d", &Numero);

        // Condição, caso Numero não se enquadre entre 0 e 9
        if (Numero <= 9 && Numero >= 0)
        {   
            // Condição de cada número usando apenas if
            printf("\nImprimindo o número digitado apenas usando if:\n");

            if (Numero == 0)
            {
                printf("O numero é 0\n\n");
            }
            if (Numero == 1)
            {
                printf("O numero é 1\n\n");
            }
            if (Numero == 2)
            {
                printf("O numero é 2\n\n");
            }
            if (Numero == 3)
            {
                printf("O numero é 3\n\n");
            }
            if (Numero == 4)
            {
                printf("O numero é 4\n\n");
            }
            if (Numero == 5)
            {
                printf("O numero é 5\n\n");
            }
            if (Numero == 6)
            {
                printf("O numero é 6\n\n");
            }
            if (Numero == 7)
            {
                printf("O numero é 7\n\n");
            }
            if (Numero == 8)
            {
                printf("O numero é 8\n\n");
            }
            if (Numero == 9)
            {
                printf("O numero é 9\n\n");
            }

            printf("Imprimindo número digitado usando if e else:\n");
            
            // Condição de cada número usando if e else
            if (Numero == 0)
                printf("O numero é 0\n\n");

                else
                if (Numero == 1)
                    printf("O numero é 1\n\n");
                
                    else
                    if (Numero == 2)
                        printf("O numero é 2\n\n");
                    
                        else
                        if (Numero == 3)
                            printf("O numero é 3\n\n");
                        
                            else
                            if (Numero == 4)
                                printf("O numero é 4\n\n");
                        
                                else
                                if (Numero == 5)
                                    printf("O numero é 5\n\n");
                            
                                    else
                                    if (Numero == 6)
                                        printf("O numero é 6\n\n");
                                
                                        else
                                        if (Numero == 7)
                                            printf("O numero é 7\n\n");
                                            else
                                    
                                            if (Numero == 8)
                                                printf("O numero é 8\n\n");
                                                else

                                                    printf("O numero é 9\n\n");
                                            
            printf("Imprimindo número digitado usando switch: \n");
            
            // Usando switch
            switch (Numero)
            {
            case 0:
                printf("O número é %d\n\n", Numero);
                break;
            case 1:
                printf("O número é %d\n\n", Numero);
                break;
            case 2:
                printf("O número é %d\n\n", Numero);
                break;
            case 3:
                printf("O número é %d\n\n", Numero);
                break;
            case 4:
                printf("O número é %d\n\n", Numero);
                break;
            case 5:
                printf("O número é %d\n\n", Numero);
                break;
            case 6:
                printf("O número é %d\n\n", Numero);
                break;
            case 7:
                printf("O número é %d\n\n", Numero);
                break;
            case 8:
                printf("O número é %d\n\n", Numero);
                break;
            case 9:
                printf("O número é %d\n\n", Numero);
                break;
            default:
                printf("Outro número.\n");
                break;
            }
        }
        else // Caso o numero digitado não se enquadre entre 0 e 9
        {   
            printf("Número inválido. Aperte Enter para reiniciar.\n");
            
            // Pausando e reiniciando
            system("pause>null");

            system("cls");

            // Retornando ao InicioNumero
            goto InicioNumero;
        }
    
    // Inicio ao loop "InicioLetra"
    InicioLetra:
        printf("Digite uma letra de A a J: ");
        
        // Lendo letra
        scanf(" %c", &Letra);
        
        // Tornando a letra maiúscula
        Letra = toupper(Letra);

        // Condição de caso letra digitada se enquadre entre A e J
        if (Letra >= 'A' && Letra <= 'J')
        {   
            // Usando switch para imprimir cada letra
            switch (Letra)
            {
            case 'A':
                printf("A letra digitada é %c\n\n", Letra);
                break;
            case 'B':
                printf("A letra digitada é %c\n\n", Letra);
                break;
            case 'C':
                printf("A letra digitada é %c\n\n", Letra);
                break;
            case 'D':
                printf("A letra digitada é %c\n\n", Letra);
                break;
            case 'E':
                printf("A letra digitada é %c\n\n", Letra);
                break;
            case 'F':
                printf("A letra digitada é %c\n\n", Letra);
                break;
            case 'G':
                printf("A letra digitada é %c\n\n", Letra);
                break;
            case 'H':
                printf("A letra digitada é %c\n\n", Letra);
                break;
            case 'I':
                printf("A letra digitada é %c\n\n", Letra);
                break;
            case 'J':
                printf("A letra digitada é %c\n\n", Letra);
                break;
            default:
                printf("Outra letra\n");
                break;
            }
        }
        else // Caso a letra digitada não se enquadre entre A e J
        {
            printf("Letra inválida. Aperte Enter para reiniciar.\n");

            // Pausando e reiniciando
            system("pause>null");

            system("cls");

            // Imprimindo cabeçalho
            Cabecalho();

            // Retornando ao InicioLetra
            goto InicioLetra;
        }

    // Finalizando
    
    printf("Deseja recomeçar? (S/N): ");
    
    scanf(" %c", &Repetir);
    
    Repetir = toupper(Repetir);

    if (Repetir == 'S')
    {
        system("cls");
        
        goto InicioNumero;
    }
    
    printf("Pressione Enter para finalizar: ");
    system("pause>null");

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