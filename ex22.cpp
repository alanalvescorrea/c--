#include <stdio.h>
main()

{
    char nome [25];
    char sobrenome [25];
    
    printf ("Digite Seu Nome: ");
    gets(nome);
    printf ("Digite Seu Sobre Nome:");
    gets(sobrenome);
    
    printf("\nDados Informados: ""%s %s\n" ,nome, sobrenome);

    printf("\nSegunda letra do nome: %c", nome[1]);
    printf("\nSegunda letra do sobrenome n: %c", sobrenome[1]);
    
    fflush(stdin);
    getchar();
    return 0;
    

}
