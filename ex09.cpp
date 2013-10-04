#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{


int fatorial,i,n;


printf ("Informe valor a ser fatorado : ");
scanf ("%d", &n);

if (n==0)
{
        fatorial = 1;
        printf ("\Fatorial: %d", fatorial);
        fflush(stdin);
        getchar();
        return 0;
}

else
{
        fatorial=n;

        for (i=1; i<n; i++)

        fatorial = fatorial * i;


        printf ("\Fatorial: %d", fatorial);

        fflush(stdin);
        getchar();
        return 0;
}
}
