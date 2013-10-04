#include <stdio.h>
main()
{
    char nome[40];

    printf ("Digite seu nome: ");
    gets(nome);
    printf ("Bom Dia %s", nome); 
    printf (" !!!\n\n");
    
    fflush(stdin);
    getchar();
    return 0;
}
