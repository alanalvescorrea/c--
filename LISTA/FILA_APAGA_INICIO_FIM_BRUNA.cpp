# include <stdio.h>
#include <stdlib.h>
# include <conio.h>
# include <string.h>

#define TAM 5
typedef struct Dados {
  char cNome[30];
  int Idade;
  struct Dados *prox;
} stDados;
stDados *pstLista=NULL; //aponta para o NULO

stDados *GetNode();

void LiberaNode (stDados *p);
void Inserir();
void ImprimeLista();
void ApagaInicio();
void ApagaFim();

int main()
{
    int i;
    for (i=0; i<TAM; i++)
    {
        
    Inserir();
}
printf ("\n\n ----------Lista ---------\n\n");
ImprimeLista();

printf("\n\n---------- Apaga o primeiro da lista -------------------------\n\n");
 ApagaInicio();
 
 ImprimeLista();

printf("\n\n---------- Apaga o ultimo da lista -------------------------\n\n");
 ApagaFim();
 
 printf ("\n\n ----------Lista atual---------\n\n");
ImprimeLista();

fflush (stdin);
getchar();
}

stDados *GetNode()
{
        return (stDados*) calloc (1,sizeof(stDados));
        }
        void LiberaNode(stDados*p)
        {
             free (p);
             }
void Inserir()
{
     stDados*temp,*p;
     temp=GetNode();
     
     printf ("Digite o nome: ");
     scanf ("%s", &temp->cNome);
     
       printf ("Digite a idade: ");
     scanf ("%d", &temp->Idade);
     
     if (pstLista == NULL)
     pstLista=temp;
     
     else {
          for (p=pstLista; p->prox; p=p->prox);
          p->prox=temp;
          }
          }
 
void ImprimeLista()
{
     stDados *p=pstLista;
     while (p!=NULL)
     {
           printf("\nNome: ");
           printf ("%s", p->cNome);
           
           printf(" - Idade: ");
           printf("%d",p->Idade);
           
           p=p->prox;
           }
           }
void ApagaInicio()

{

stDados *p = pstLista;

pstLista=p->prox;

LiberaNode(p);

}
    
void ApagaFim()

{

stDados *p =pstLista;

for(p=pstLista;p->prox->prox;p=p->prox);

LiberaNode(p->prox);
p->prox = NULL;
}
           





           
        
