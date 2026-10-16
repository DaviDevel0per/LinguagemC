#include <stdio.h>
#include <math.h>

/*

	
I=0 J=1
I=0 J=2
I=0 J=3

I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2

I=0.4 J=1.4
I=0.4 J=2.4
I=0.4 J=3.4

I=0.6 J=1.6
I=0.6 J=2.6
I=0.6 J=3.6

I=0.8 J=1.8
I=0.8 J=2.8
I= J=3.8

I=1.2 J=2.2
I=1.2 J=3.2
I=1.2 J=4.2

I=1.4 J=1.2

I=2 J=3
I=2 J=4
I=2 J=5

*/

int main() {
    double i, j;

    for (i = 0; j < 5; i = i + 0.2)
    {   
        for (int c = 1; c <= 3; c++)
        {   
            j = c + i;

            printf("I=%g J=%g\n", i, j);
        }
    }

    return 0;
}