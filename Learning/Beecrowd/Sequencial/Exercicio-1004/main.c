#include <stdio.h>

/*

-> PROBLEMA

Leia dois valores inteiros. A seguir, calcule o produto entre
estes dois valores e atribua esta operação à variável PROD.
A seguir mostre a variável PROD com mensagem correspondente.   

Entrada
O arquivo de entrada contém 2 valores inteiros.

Saída
Imprima a mensagem "PROD" e a variável PROD conforme exemplo abaixo,
com um espaço em branco antes e depois da igualdade. Não esqueça
de imprimir o fim de linha após o produto, caso contrário seu
programa apresentará a mensagem: “Presentation Error”.

-> ESTRUTURA

1. Declarar Variáveis, a, b, PROD
2. Ler 2 valores inteiros, a, b
3. Calcular produto, a*b
4. Imprimir "PROD = %d"

*/

int main() {
    int a, b, PROD;

    scanf("%d%d", &a,&b);

    PROD = a*b;
    printf("PROD = %d\n", PROD);
};