#include <stdio.h>
main ()
{
int idade;

    printf ("Informe sua Idade:\n");
    scanf ("%d", &idade);
    printf ("Sua idade eh: %d\n", idade);
    
    fflush(stdin);
    getchar();
    return 0;
}
