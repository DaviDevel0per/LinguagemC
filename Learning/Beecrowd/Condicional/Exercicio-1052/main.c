#include <stdio.h>
#include <math.h>

/*



*/

int main(void)
{   
    int Mes;
    char Meses[12][10] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };

    scanf("%d", &Mes);

    if (Mes < 1 || Mes > 12) return 0;

    printf("%s\n", Meses[Mes - 1]);

    return 0;
}