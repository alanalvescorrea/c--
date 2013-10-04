/*questão 1 prova*/
#include <stdio.h>
#include<conio.h>

#define MAX_CAPACIDADE 500
/**********estruturas**************/
typedef struct Pilha {
    int pilha[10];
    int topo;
} Pilha;

typedef struct PilhaNegativos {
    int pilhaNegativos[10];
    int topoNegativos;
} PilhaNegativos;
/**********func Inicializar Pilha**************/
void Pilha_init(Pilha* pilha) 
{ pilha->topo = 0; }
  
void Pilha_initNegativos(PilhaNegativos* pilhaNegativos) 
{ pilhaNegativos->topoNegativos = 0; }


void Pilha_push(Pilha* pilha, int valor) {
     // se pilha cheia nao deixa inserir
     if(pilha->topo >= MAX_CAPACIDADE - 1)
       return;
     // insere
     pilha->pilha[pilha->topo++] = valor;
}

void Pilha_pushNegativos(PilhaNegativos* pilhaNegativos, int valorNegativo) {
     // testa overflow
     if(pilhaNegativos->topoNegativos >= MAX_CAPACIDADE - 1)
       return;
     // insere 
     pilhaNegativos->pilhaNegativos[pilhaNegativos->topoNegativos++] = valorNegativo;
}


int Pilha_pop(Pilha* pilha) {
    
     if(pilha->topo == 0)
       return -1;
     
     pilha->topo--;
     return pilha->pilha[pilha->topo];
}
int Pilha_popNegativos(PilhaNegativos* pilhaNegativos) {
   
     if(pilhaNegativos->topoNegativos == 0)
       return -1;
    
     pilhaNegativos->topoNegativos--;
     return pilhaNegativos->pilhaNegativos[pilhaNegativos->topoNegativos];
}

void Pilha_imprime(Pilha* pilha) {
    int i;
    
    for(i = 0; i < pilha->topo; i++)
      printf("%d ", pilha->pilha[i]);
    printf("\n");
}

void Pilha_imprimeNegativos(PilhaNegativos* pilhaNegativos) {
    int i;
    
    for(i = 0; i < pilhaNegativos->topoNegativos; i++)
      printf("%d ", pilhaNegativos->pilhaNegativos[i]);
      printf("\n");
}

/**********função principal*********************/
int main(void) {
    Pilha p;
    PilhaNegativos pNegativos;
    Pilha_init(&p);
    Pilha_push(&p, 2);
    Pilha_imprime(&p);
    Pilha_push(&p, 3);
    Pilha_imprime(&p);
    Pilha_push(&p, 5);
    Pilha_imprime(&p);
    Pilha_push(&p, 6);
    Pilha_imprime(&p);

    
    Pilha_initNegativos(&pNegativos);
    Pilha_pushNegativos(&pNegativos, -2);
    Pilha_imprimeNegativos(&pNegativos);
    Pilha_pushNegativos(&pNegativos, -3);
    Pilha_imprimeNegativos(&pNegativos);
    Pilha_pushNegativos(&pNegativos, -5);
    Pilha_imprimeNegativos(&pNegativos);
    Pilha_pushNegativos(&pNegativos, -6);
    Pilha_imprimeNegativos(&pNegativos);
    getch();
    return 0;
}
