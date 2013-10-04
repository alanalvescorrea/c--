#include<stdio.h>
main()
{
    int idade;
    char nome [30];

    printf ("Informe seu Nome \n");
    scanf ("%s", nome);
    printf ("Informe sua idade\n");
    scanf ("%d", &idade);

    printf ("A Idade do Sr. %s eh %d\n" , nome, idade);
    
    fflush(stdin);
    getchar();
    return 0;
}
