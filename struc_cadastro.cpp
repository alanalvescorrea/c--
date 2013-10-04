#include <stdio.h>

struct cadastro {
    char nome[20];
    char end[50];
    char telefone[11];
};

main()
{
int i;
struct cadastro c[2];

    for (i=0; i<2; i++)
    {
        printf("Digite seu Nome : ");
        scanf("%s", &c[i].nome);
        printf("\Digite seu Endereco : ");
        scanf("%s", &c[i].end);
        printf("\Digite seu Telefone : ");
        scanf("%s", &c[i].telefone);
        puts ("\n");
    }
    
    puts ("**************************");
    puts ("Dados Cadastrados");
    for (i=0; i<2; i++)
    {
        printf("\nNome : %s", c[i].nome);
        printf("\nEndereco : %s", c[i].end);
        printf("\nTelefone : %s", c[i].telefone);
        printf("\n\n");
    }
 fflush(stdin);
 getchar();
 return 0; 
}
