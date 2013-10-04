#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define TAM 2
      
struct Dados
{
       char nome [20];
       char dataNascimento[13];
             };


main()
{   

int i;
struct Dados dados [TAM];

for (i=0; i<TAM; i++)
{
    printf("informe nome: ");
    scanf ("%s", &dados[i].nome);
    
    printf("informe data de nascimento: ");
    scanf ("%s", &dados[i].dataNascimento);
}

puts ("**********");

for (i=0; i<TAM; i++)
{
    printf("Nome Informado: %s\n", dados[i].nome);
    printf ("Data de Nascimento: %s \n", dados[i].dataNascimento);
    printf("\n");
}

  fflush (stdin);
  getchar();
  return 0;
  
}         
