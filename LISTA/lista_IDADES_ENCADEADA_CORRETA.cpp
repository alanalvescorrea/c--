/*lista encadeada*/
# include <stdio.h>
#include <stdlib.h>
# include <conio.h>
# include <string.h>

typedef struct Cadastro
{
  char nome[50];
  int idade;
  struct Cadastro *DirecionaLista;
} estruturaCadastro;

 estruturaCadastro *Lista=NULL;
 
/*********DECLARA FUNÇÕES**************/
estruturaCadastro *PegaEstrutura();
void FreeEstrutura(estruturaCadastro *ponteiro);
void Inserir();
void exibir();
void gravaArquivo();
void remover_inicio();
void remover_fim();


/************FUNÇÃO PRINCIPAL***************/
int main()
{
    
    Inserir();
    Inserir();
    Inserir();
    Inserir();
    Inserir();
    gravaArquivo();
    printf("\n\n------------Lista Inicial-------------------------------");
    exibir();
   
    
    printf("\n\n------------Apaga Primeiro da Lista----------------------");
    remover_inicio();
    exibir();
    
    printf("\n\n------------Apaga Ultimo da Lista------------------------");
    remover_fim();
    exibir();
   
    
    printf ("\n\n ----------LISTA FINAL----------------------------------");
    exibir();
    fflush(stdin);
    getchar();
    
}


/*********PEGA ESTRUTURA**************/
estruturaCadastro *PegaEstrutura()
{
  return (estruturaCadastro *) calloc(1,sizeof(estruturaCadastro));
}

void FreeEstrutura(estruturaCadastro *ponteiro);


/****************INSERIR*************/
void Inserir()
{
 estruturaCadastro *ponteirotemporario,*ponteiro;    
   
 ponteirotemporario = PegaEstrutura();
 printf("Digite o nome: ");
 fflush(stdin);
 gets(ponteirotemporario->nome);
 
 printf("Digite idade: ");
 fflush(stdin);
 scanf("%d", &ponteirotemporario->idade);
 
 
 
 if(Lista == NULL)
   Lista = ponteirotemporario;
 else {
   for(ponteiro=Lista;ponteiro->DirecionaLista;ponteiro=ponteiro->DirecionaLista);
   ponteiro->DirecionaLista = ponteirotemporario;
 }
}


/*****************EXIBIR**************/
void exibir()
{
 estruturaCadastro *ponteiro = Lista;
 
 while(ponteiro != NULL) {
   
    printf("\nNOME: %s",ponteiro->nome);
    printf("\nIDADE:%d",ponteiro->idade);
    ponteiro=ponteiro->DirecionaLista;     
 } 
}


/******************GRAVA ARQUIVO************/
void gravaArquivo()
{
 estruturaCadastro *ponteiro = Lista;
 FILE *fp=NULL;
 char *pstNome = (char *) calloc(255,sizeof(char));
 int i=0;
 
 while(1) {
          sprintf(pstNome,"lista%d.txt",i++);
          if((fp=fopen(pstNome,"rt"))==NULL)
             break;
          fclose(fp);
          }
 
 fp=fopen(pstNome,"wt");
 
 while(ponteiro != NULL) {
    fprintf(fp,"\n%s",ponteiro->nome);
    fprintf(fp,"\n%d",ponteiro->idade);
    ponteiro=ponteiro->DirecionaLista;     
 }
 fclose(fp);
 free(pstNome);
}

/*****************REMOVER INICIO**************/
void remover_inicio()
{
estruturaCadastro *ponteiro = Lista;
Lista=ponteiro->DirecionaLista;
free(ponteiro);

}



/*****************REMOVER FIM**************/
void remover_fim()
{
estruturaCadastro *ponteiro=Lista;
for (ponteiro=Lista; ponteiro->DirecionaLista->DirecionaLista; ponteiro=ponteiro->DirecionaLista);
free(ponteiro->DirecionaLista);
ponteiro->DirecionaLista=NULL;
}

