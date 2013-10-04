#include <stdio.h>

int main ()

     
{
     float f;
     char c;
     
    printf ("Informe uma variavel float: ");
    scanf ("%f", &f);
    printf ("variavel  informado: %.2f\n", f);
    
    printf ("\nInforme uma variavel string: ");
    fflush(stdin);
    scanf ("%c", &c);
    printf ("variavel  informado: %c\n", c);
    
    fflush(stdin);
    getchar();
    return 0;
}
