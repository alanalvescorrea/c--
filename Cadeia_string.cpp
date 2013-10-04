#include <stdio.h>

int main ()

     
{
     char nome [30];
 
     
    printf ("Informe nome: ");
    scanf ("%s", nome);
    printf ("nome informado: %s\n", &nome);
   
    
    fflush(stdin);
    getchar();
    return 0;
}
