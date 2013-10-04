#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//Defines
#define TAM 100

// Estrutura da Fila
typedef struct PROCESSOS
{
    int prioridade;
    int pid;
    char status;
    int flags[65356];
    int consumoCPU;
    int qtd;
    struct PROCESSOS *prox;
} processos;

// Prototipo das funcoes
int removeFIFO(processos **s);
int removeFILO(processos **s);
void insert(processos **s, int a);
void InsertOrd(processos **s, int a);
void PrintFila(processos *s);



int main()
{
    processos *pstFila=NULL;
    int i,a;


    for(i=0; i<5; i++)
        insert(&pstFila,i);


    for(i=0; i<5; i++) {
        scanf("%d",&a);
        InsertOrd(&pstFila,a);
    }

    PrintFila(pstFila);


    for(i=0; i<5; i++)
     
        printf("%d\n",removeFILO(&pstFila));

    PrintFila(pstFila);

    fflush(stdin);
    getchar();
}



void insert(processos **s, int a)
{
    processos *pstElemento = (processos *) calloc(1,sizeof(processos)),*p;

    pstElemento->prioridade = a;

    if(*s == NULL)
        *s = pstElemento;
    else
    {
        for(p=*s; p->prox; p=p->prox);
        p->prox = pstElemento;
    }

}

void InsertOrd(processos **s, int a)
{
    processos *pstNovo = (processos *) calloc(1,sizeof(processos)),*p=*s,*pstAnterior=NULL;

    pstNovo->prioridade = a;

	if(*s == NULL)
		*s = pstNovo;
	else {
		while(p != NULL && a < p->prioridade) {
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

int removeFIFO(processos **s)
{
    int a;
    processos *p;

    if(!*s)
        printf("Fila Vazia!\n");
    else
    {
        p = *s;
        *s = p->prox;
        a = p->prioridade;
        free(p);
    }

    return a;
}

void PrintFila(processos *s)
{
    printf("\n\n-------------------------------------\n");
    if(!s)
        printf("Fila Vazia!\n");
    else
        while(s)
        {
            printf("%d\n",s->prioridade);
            s = s->prox;
        }
    printf("-------------------------------------\n");
}

int removeFILO(processos **s)
{
    int a;
    processos *p=*s;

    if(!*s)
        printf("Pilha Vazia!\n");
    else
    {
        if(!p->prox) {
          a = p->prioridade;
		  free(p);
		  p = *s = NULL;

		} else {
		  for(p=*s; p->prox->prox; p=p->prox);
          a = p->prox->prioridade;
          free(p->prox);
          p->prox = NULL;
		}
    }

    return a;
}
