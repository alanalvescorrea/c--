#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//Defines
#define TAM 100

// Estrutura da Fila
typedef struct QUEUE
{
    int nItem;
    struct QUEUE *prox;
} queue;

// Prototipo das funcoes
int removeFIFO(queue **s);
int removeFILO(queue **s);
void insert(queue **s, int nValor);
void InsertOrd(queue **s, int nValor);
void PrintFila(queue *s);


//-------------------------------------------------------------------
// Laço principal do programa
int main()
{
    queue *pstFila=NULL;
    int i,nValor;


    for(i=0; i<5; i++)
        insert(&pstFila,i);


    for(i=0; i<5; i++) {
        scanf("%d",&nValor);
        InsertOrd(&pstFila,nValor);
    }

    PrintFila(pstFila);


    for(i=0; i<5; i++)
        //printf("%d\n",removeFIFO(&pstFila));
        printf("%d\n",removeFILO(&pstFila));

    PrintFila(pstFila);

    fflush(stdin);
    getchar();
}
/********************************************************************
  Funcao: insert
  Parametros: ponteiro para fila, valor
  Retorno: nada
  Funcinamento: recebe uma fila como parametro e coloca o valor na
                pilha.
*******************************************************************/
void insert(queue **s, int nValor)
{
    queue *pstElemento = (queue *) calloc(1,sizeof(queue)),*p;

    pstElemento->nItem = nValor;

    if(*s == NULL)
        *s = pstElemento;
    else
    {
        for(p=*s; p->prox; p=p->prox);
        p->prox = pstElemento;
    }

}
/********************************************************************
  Funcao: insert
  Parametros: ponteiro para fila, valor
  Retorno: nada
  Funcinamento: recebe uma fila como parametro e coloca o valor na
                pilha.
*******************************************************************/
void InsertOrd(queue **s, int nValor)
{
    queue *pstNovo = (queue *) calloc(1,sizeof(queue)),*p=*s,*pstAnterior=NULL;

    pstNovo->nItem = nValor;

	if(*s == NULL)
		*s = pstNovo;
	else {
		while(p != NULL && nValor < p->nItem) {
			pstAnterior = p;
			p = p->prox;
		}
		if(!pstAnterior) {
			pstNovo->prox = p;
			*s = pstNovo;
		}
		else {
			pstAnterior->prox = pstNovo;
			pstNovo->prox = p;
		}
	}
}
/********************************************************************
   Funcao: removeFIFO
   Parametros: ponteiro para pilha
   Retorno: Valor retirado da pilha
   Funcinamento: recebe uma pilha como parametro e retira o valor da
                 pilha.
*******************************************************************/
int removeFIFO(queue **s)
{
    int nValor;
    queue *p;

    if(!*s)
        printf("Fila Vazia!\n");
    else
    {
        p = *s;
        *s = p->prox;
        nValor = p->nItem;
        free(p);
    }

    return nValor;
}
/********************************************************************
   Funcao: PrintFila
   Parametros: ponteiro para Fila
   Retorno: nada
   Funcinamento: Imprime a Fila na tela
*******************************************************************/
void PrintFila(queue *s)
{
    printf("\n\n-------------------------------------\n");
    if(!s)
        printf("Fila Vazia!\n");
    else
        while(s)
        {
            printf("%d\n",s->nItem);
            s = s->prox;
        }
    printf("-------------------------------------\n");
}
/********************************************************************
   Funcao: removeFILO
   Parametros: ponteiro para pilha
   Retorno: Valor retirado da pilha
   Funcinamento: recebe uma pilha como parametro e retira o valor da
                 pilha.
*******************************************************************/
int removeFILO(queue **s)
{
    int nValor;
    queue *p=*s;

    if(!*s)
        printf("Pilha Vazia!\n");
    else
    {
        if(!p->prox) {
          nValor = p->nItem;
		  free(p);
		  p = *s = NULL;

		} else {
		  for(p=*s; p->prox->prox; p=p->prox);
          nValor = p->prox->nItem;
          free(p->prox);
          p->prox = NULL;
		}
    }

    return nValor;
}
