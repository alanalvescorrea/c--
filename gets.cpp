#include <stdio.h>

int main ()

     
{
     char nome [30];
 
     
    printf("Informe nome: ");
    gets (&nome);
    puts (nome);
   
    
    fflush(stdin);
    getchar();
    return 0;
}
