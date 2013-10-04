#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

typedef struct {
int codigoCatalogacao [10];
char doado [50];
char nomeDaObra [50];
char nomeAutor [50];
char editora [50];
int nrPaginas;
}livros;

typedef struct {
livros exatas [500];
livros humanas [500];
livros biomedicas [500];
} biblioteca;      


main ()
{
biblioteca varBiblioteca;

while (1){

printf ("Menu\n");
printf ("1- Novo Cadastro\n");
printf ("2-Consulta\n");
printf ("3-Exclusão\n");
printf ("4-Sair do Programa\n");

int menuPrincipal;
switch (menuPrincipal){
case 1:
printf ("Informe Area do Conhecimento Para Cadastramento \n");
printf ("1-Biomedicas\n");
printf ("2-Humanas\n");
printf ("3-Exatas\n");
break;

int menuCadastrarAreaConehcimento;
switch (menuCadastrarAreaConehcimento) {
     case '1':
     printf ("CADASTRO LIVROS DE CIENCIAS BIOMETRICAS\n");
     printf ("Informe Código Catalogação\n");
            scanf ("%d", &biblioteca.biomedicas[0].codigoCatalogacao);
     printf ("Informe se o livro foi doado (S)ou(N)?\n");
            scanf ("%s", &biblioteca.biomedicas[0].doado);
     printf ("Informe Nome da Obra\n");
            scanf ("%s", &biblioteca.biomedicas[0].nomeDaObra);
     printf ("Informe Nome do Autor\n");
            scanf ("%s", &biblioteca.biomedicas[0].nomeAutor);
     printf ("Informe Editora\n");
            scanf ("%s", &biblioteca.biomedicas[0].editora);
     printf ("Informe Numero de páginas\n");
            scanf ("%d", &biblioteca.biomedicas[0].nrPaginas);
     break;
           
     case 2:
     printf ("CADASTRO LIVROS DE CIENCIAS HUMANAS\n");
     printf ("Informe Código Catalogação\n");
            scanf ("%d", &biblioteca.humanas[0].codigoCatalogacao);
     printf ("Informe se o livro foi doado (S)ou(N)?\n");
            scanf ("%s", &biblioteca.humanas[0].doado);
     printf ("Informe Nome da Obra\n");
            scanf ("%s", &biblioteca.humanas[0].nomeDaObra);
     printf ("Informe Nome do Autor\n");
            scanf ("%s", &biblioteca.humanas[0].nomeAutor);
     printf ("Informe Editora\n");
            scanf ("%s", &biblioteca.humanas[0].editora);
     printf ("Informe Numero de páginas\n");}
            scanf ("%d", &biblioteca.humanas[0].nrPaginas);
     break;
     
     case 3:
     printf ("CADASTRO LIVROS DE CIENCIAS EXATAS\n");
     printf ("Informe Código Catalogação\n");
            scanf ("%d", &biblioteca.exatas[0].codigoCatalogacao);
     printf ("Informe se o livro foi doado (S)ou(N)?\n");
            scanf ("%s", &biblioteca.exatas[0].doado);
     printf ("Informe Nome da Obra\n");
            scanf ("%s", &biblioteca.exatas[0].nomeDaObra);
     printf ("Informe Nome do Autor\n");
            scanf ("%s", &biblioteca.exatas[0].nomeAutor);
     printf ("Informe Editora\n");
            scanf ("%s", &biblioteca.exatas[0].editora);
     printf ("Informe Numero de páginas\n");}
            scanf ("%d", &biblioteca.exatas[0].nrPaginas);
     break;
     
     default:
     printf ("opcao invalida");                                                                                          
     }
     
     case 2:
     printf ("Area para Consulta\n");
     printf (" 1 Consultar\n");
     printf ("-1 Sair Consulta\n");
     break;
     
     int menuConsultar;
     switch (menuConsultar) {
     case 1:
     printf ("Informe Area Conhecimento para Consultar\n");
     printf (" 1 Biomedicas\n");
     printf (" 2 Humanas\n");
     printf (" 3 Exatas\n");
     break;
     
     int menuConsultarAreaConhecimento;
     switch (menuConsultarAreaConhecimento){
           
                  while (!= -1){       
                  case 1:
                  printf ("Consulta Titulos na Area do Conhecimento Biomedico\n");
                  printf ("Informe -1 para encerrar a consulta\n");
                  printf ("Informe Codigo Catalogação\n");
                         if (biblioteca.biomedicas[0].codigoCatalogacao == TRUE)
                         {
                         printf ("Codigo Catolacao%d: ", biblioteca.biomedicas[0].codigoCatalogacao);
                         print ("Doação%s: ", biblioteca.biomedicas[0].doado);
                         printf ("Nome%s: ", biblioteca.biomedicas[0].nomeDaObra);
                         printf ("Editora%s: ", biblioteca.biomedicas[0].editora);
                         printf ("Nº Paginas%d: ", biblioteca.biomedicas[0].nrPaginas);
                         break;
                         }
                         else
                         printf ("Código não cadastrado");
                 
                  case 2:
                  printf ("Consulta Titulos na Area do Conhecimento Humanas\n");
                  printf ("Informe -1 para encerrar a consulta\n");
                  printf ("Informe Codigo Catalogação\n");
                         if (biblioteca.humanas[0].codigoCatalogacao == TRUE)
                         {
                         printf ("Codigo Catolacao%d: ", biblioteca.humanas[0].codigoCatalogacao);
                         printf ("Doação%s: ", biblioteca.humanas[0].doado);
                         printf ("Nome%s: ", biblioteca.humanas[0].nomeDaObra);
                         printf ("Editora%s: ", biblioteca.humanas[0].editora);
                         printf ("Nº Paginas%d: ", biblioteca.humanas[0].nrPaginas);
                         break;
                         }
                         else
                         printf ("Código não cadastrado");               
                  
                  case 3:
                  printf ("Consulta Titulos na Area do Conhecimento Exatas\n");
                  printf ("Informe -1 para encerrar a consulta\n");
                  printf ("Informe Codigo Catalogação\n");
                         if (biblioteca.exatas[0].codigoCatalogacao == TRUE)
                         {
                         printf ("Codigo Catolacao%d: ", &biblioteca.exatas[0].codigoCatalogacao);
                         printf ("Doação%s: ", biblioteca.exatas[0].doado);
                         printf ("Nome%s: ", biblioteca.exatas[0].nomeDaObra);
                         printf ("Editora%s: ", biblioteca.exatas[0].editora);
                         printf ("Nº Paginas%d: ", biblioteca.exatas[0].nrPaginas);
                         break;
                         }
                         else
                         printf ("Código não cadastrado");  
                  
                  default:
                  printf ("opcao invalida");                                                                                          
                  }                              
                  } 
                  
         case 2:
         exit (0);
         
         default:
         printf ("opcao invalida"); 
         }    
                       
      case 3: 
      printf ("Area para Exclusao\n");                   
                                                           
