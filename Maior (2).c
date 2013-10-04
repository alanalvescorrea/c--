#include <stdio.h>
#include <stdlib.h>

 int main(void)
 {
    int vetor[5];
    int x, y, z;

    printf ("Digite 5 numeros\n");

    for (y = 0; y < 5; y++)   /*Este laco faz o scan de cada elemento do vetor*/
    {
       scanf("%d", &vetor[y] );
    }
    z = 1;
    y = 0;
    x = vetor[0];

    while (y < 4) /*Este laco compara cada elemento do vetor*/
    {
        if (vetor[y] < vetor[z])
        {
           if (vetor[z] > x)
           {
              x = vetor[z];
           }
        }
        y++;
        z++;
    }

    printf("\n O maior numero que voce digitou foi %d .\n",x);
    fflush(stdin);
    getchar();
    return 0;
 }

