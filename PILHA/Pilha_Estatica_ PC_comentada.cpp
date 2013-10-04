#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Defines
#define TAM 100

// Estrutura da Pilha
typedef struct
{
    int nTop;
    int nItems[TAM];
} stack;

// Prototipo das funcoes
void StartStack(stack *s);
int pop(stack *s);
void push(stack *s,int nValor);
int IsEmpty(stack *s);
void PrintPilha(stack *s);


//-------------------------------------------------------------------
// Laco principal do programa
int main()
{
    stack sPilha;

    StartStack(&sPilha);

    for(int i=0; i<5; i++)
    push(&sPilha,i);

    PrintPilha(&sPilha);

    for(int i=0; i<5; i++)
    printf("%d\n",pop(&sPilha));

    PrintPilha(&sPilha);

    fflush(stdin);
    getchar();
}
/********************************************************************
   Funcao: IsEmpty
   Parametros: ponteiro para pilha
   Retorno: 0 - pilha com elementos
            1 - pilha vazia
   Funcinamento: recebe uma pilha como parametro e retorna se a pilha
                 est� vazia ou n�o
*******************************************************************/
int IsEmpty(stack *s)
{
    if(s->nTop == -1)
        return 1;
    else return 0;
}
/********************************************************************
   Funcao: StartStack
   Parametros: ponteiro para pilha
   Retorno: nada
   Funcinamento: recebe uma pilha como parametro e limpa todos os
                 valores da pilha e coloca o indice em -1
*******************************************************************/
void StartStack(stack *s)
{
    s->nTop = -1;
    memset(&s->nItems,0x00,sizeof(s->nItems));
}
/********************************************************************
   Funcao: push
   Parametros: ponteiro para pilha, valor
   Retorno: nada
   Funcinamento: recebe uma pilha como parametro e coloca o valor na
                 pilha.
*******************************************************************/
void push(stack *s,int nValor)
{
    if(s->nTop == TAM-1)
        printf("Pilha Cheia!\n");
    else
        s->nItems[++s->nTop] = nValor;
}
/********************************************************************
   Funcao: pop
   Parametros: ponteiro para pilha
   Retorno: Valor retirado da pilha
   Funcinamento: recebe uma pilha como parametro e retira o valor da
                 pilha.
*******************************************************************/
int pop(stack *s)
{
    if(IsEmpty(s))
        printf("Pilha Vazia!\n");
    else
        s->nTop--;
    return s->nItems[s->nTop+1];
}
/********************************************************************
   Funcao: PrintPilha
   Parametros: ponteiro para pilha
   Retorno: nada
   Funcinamento: Imprime a pilha na tela
*********************************************************************/
void PrintPilha(stack *s)
{
    printf("\n\n-------------------------------------\n");
    if(IsEmpty(s))
        printf("Pilha Vazia!\n");
    else
        for(int i=0; i<=s->nTop; i++)
            printf("%d\n",s->nItems[i]);
    printf("-------------------------------------\n");
}
