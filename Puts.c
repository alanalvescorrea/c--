#include <stdio.h>
main()

{
    char nome [40];

    printf ("Digite Seu Nome: ");
    gets(nome);
    puts ("Bom Dia.."); 
    puts (nome);
    
    fflush(stdin);
    getchar();
    return 0;

}
