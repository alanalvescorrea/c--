#include <stdio.h>
main()
{
  char nome [30];
  char endereco [50];
  char telefone [15];
  char cidade [50];
  char cep [15];

  
printf ("Informe seu nome: ");
scanf ("%s", nome);

printf ("\nInforme seu endereco: ");
scanf ("%s", endereco);

printf ("\nInforme seu numero de telefone: ");
scanf ("%s", telefone);
  
printf ("\nInforme sua Cidade: ");
scanf ("%s", cidade);

printf ("\nInforme o CEP do seu endereco: "); 
scanf ("%s", cep);


printf ("*******DADOS SAO INFORMADOS:**********\n");
printf ("\nNome: %s\n"
        "\nEndereco: %s\n"
        "\nTelefone: %s\n"
        "\nCidade: %s\n"
        "\nCEP: %s\n", nome, endereco, telefone, cidade, cep);
        
        fflush(stdin);
        getchar();
        return 0;


}
