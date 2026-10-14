#include <stdio.h>
#include <math.h>

/*

I=1 J=7
I=1 J=6
I=1 J=5

I=3 J=9
I=3 J=8
I=3 J=7

I=5 J=11
I=5 J=10
I=5 J=9

I=7 J=13
I=7 J=12
I=7 J=11

I=9 J=15
I=9 J=14
I=9 J=13

*/


int main() {
    int i = 1, j = i + 6;

    for (int c1 = 0; c1 < 5; c1++)
    {
        for (int c2 = 0; c2 < 3; c2++)
        {
            printf("I=%d J=%d\n", i, j);

            j--;
        }
        
        i = i + 2;
        j = i + 6;
    }
    
    return 0;
}