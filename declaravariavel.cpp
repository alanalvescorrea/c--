#include <stdio.h>
int i;
int main ()

     
{
    printf ("Informe uma numero: ");
    scanf ("%d", &i);
    printf ("numero informado: %d\n", i);
    
    
    fflush(stdin);
    getchar();
    return 0;
}
