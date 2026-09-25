#include <stdio.h>
#include <math.h>

/*



*/

int main(void)
{
    double Salario, SalarioPassado, Reajuste, Percentual;
    
    scanf("%lf", &Salario);

    SalarioPassado = Salario;

    if (Salario <= 400) Salario = Salario + (Salario * 0.15);
    else if (Salario <= 800) Salario = Salario + (Salario * 0.12);
    else if (Salario <= 1200) Salario = Salario + (Salario * 0.10);
    else if (Salario <= 2000) Salario = Salario + (Salario * 0.07);
    else  Salario = Salario + (Salario * 0.04);

    printf( "Novo salario: %.2lf\n"
            "Reajuste ganho: %.2lf\n"
            "Em percentual: %.0lf %%\n",
            Salario, (Salario - SalarioPassado), ((Salario - SalarioPassado) / SalarioPassado) * 100
    );



    return 0;
}