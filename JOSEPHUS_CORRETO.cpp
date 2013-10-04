#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct jose
{
  char nome[50];
  struct jose *prox;
}exercito;
exercito *lista;

void cria_exercito(exercito **aux)
  {
  *aux=(exercito*) malloc(sizeof(exercito));
  }
void insere(exercito **l,char n[10])
{
  exercito *aux,*aux2;
  cria_exercito(&aux);
  strcpy(aux->nome,n);
  aux->prox=NULL;
  if(*l==NULL)
  {
     *l=aux;
  }
  else
  {
     aux2=*l;
     while(aux2->prox!=NULL)
     {
        aux2=aux2->prox;
     }
     aux2->prox=aux;
  }
}
void fim(exercito **l)
{
  exercito *aux;
  aux=*l;
  while(aux->prox!=NULL)
  {
     aux=aux->prox;
  }
  aux->prox=*l;
}

void le()
{
  char nome[50]={"\0"};
  while(nome[0]!= 'F')
  {
     printf("Digite o nome do soldado: \n");
     printf("Para finalizar exercito, digite 'F' : \n");
     gets(nome);
     if(nome[0]!= 'F')
     {
        insere(&lista,nome);
        nome[0]='\0';
     }
     else
     {
        fim(&lista);
        printf("LISTA DE SOLDADOS FINALIZADA!\n\n\n");
     }
  } 
}
void exclui(exercito **l,int num)
{
  int i=1;
  exercito *aux,*aux2;
  aux=*l;
  aux2=aux->prox;
  while(aux!=aux->prox)
  {
        if(num-1==i)
        {
           printf("se deu mal:");
           puts(aux2->nome);
           printf("\n");
           aux->prox=aux2->prox;
           aux = aux2->prox;
           free(aux2);
           aux2 = aux->prox;
           i=1;
        }
        else
        {
           aux=aux->prox;
           aux2=aux2->prox;
           i++;
        }
  }
  printf("O SOLDADO QUE SALVOU FOI %s \n",aux->nome);
  free(aux);
}
int main()
{
  printf("Informe F para Finalizar a lista\n\n");  
  int n;
  le();
  printf("\nDigite o numero sorteado: ");
  scanf("%d",&n);
  exclui(&lista,n);
  system("PAUSE");   
  return 0;
}
