#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//Defines
#define TAM 100

// Estrutura da Pilha
typedef struct STACK
{
    int nItem;
    struct STACK *prox;
} stack;

// Prototipo das funcoes
int pop(stack **s);
void push(stack **s, int nValor);
int IsEmpty(stack *s);
void PrintPilha(stack *s);


//-------------------------------------------------------------------
// Laço principal do programa
int main()
{
    stack *pstPilha=NULL;
    int i;

    for(i=0; i<5; i++)
    push(&pstPilha,i);

    PrintPilha(pstPilha);


    for(i=0; i<5; i++)
    printf("%d\n",pop(&pstPilha));

    PrintPilha(pstPilha);


    fflush(stdin);
    getchar();
}
/********************************************************************
   Funcao: IsEmpty
   Parametros: ponteiro para pilha
   Retorno: 0 - pilha com elementos
            1 - pilha vazia
   Funcinamento: recebe uma pilha como parametro e retorna se a pilha
                 está vazia ou não
*******************************************************************/
int IsEmpty(stack *s)
{
    if(!s) return 1;
    else return 0;
}
/********************************************************************
   Funcao: push
   Parametros: ponteiro para pilha, valor
   Retorno: nada
   Funcinamento: recebe uma pilha como parametro e coloca o valor na
                 pilha.
*******************************************************************/
void push(stack **s, int nValor)
{
    stack *pstElemento = (stack *) calloc(1,sizeof(stack)),*p;

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
   Funcao: pop
   Parametros: ponteiro para pilha
   Retorno: Valor retirado da pilha
   Funcinamento: recebe uma pilha como parametro e retira o valor da
                 pilha.
*******************************************************************/
int pop(stack **s)
{
    int nValor;
    stack *p=*s;

    if(IsEmpty(*s))
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
/********************************************************************
   Funcao: PrintPilha
   Parametros: ponteiro para pilha
   Retorno: nada
   Funcinamento: Imprime a pilha na tela
*******************************************************************/
void PrintPilha(stack *s)
{
    printf("\n\n-------------------------------------\n");
    if(!s)
        printf("Pilha Vazia!\n");
    else
        while(s)
        {
            printf("%d\n",s->nItem);
            s = s->prox;
        }
    printf("-------------------------------------\n");
}
