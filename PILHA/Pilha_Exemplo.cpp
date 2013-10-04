#include <stdio.h>
#include<conio.h>

#define MAX_CAPACIDADE 500

typedef struct Pilha {
    int pilha[10];
    int topo;
} Pilha;

void Pilha_init(Pilha* pilha) {
    pilha->topo = 0;
    //(*pilha).topo = 0;
    //(*pilha) pega o endereço do ponteiro e devolve a própria estrutura para fazer acesso direto
    //.topo pega o campo "topo"
}

void Pilha_push(Pilha* pilha, int valor) {
     // se pilha cheia nao deixa inserir
     if(pilha->topo >= MAX_CAPACIDADE - 1)
       return;
     // insere efetivamente
     pilha->pilha[pilha->topo++] = valor;
}

int Pilha_pop(Pilha* pilha) {
     // se pilha vazia nao tem nada pra tirar
     if(pilha->topo == 0)
       return -1;
     // retira efetivamente
     pilha->topo--;
     return pilha->pilha[pilha->topo];
}

void Pilha_imprime(Pilha* pilha) {
    int i;
    

    for(i = 0; i < pilha->topo; i++)
      printf("%d ", pilha->pilha[i]);
    printf("\n");
}

int main(void) {
    Pilha p;
    Pilha_init(&p);
    
    Pilha_push(&p, 2);
    Pilha_imprime(&p);
    Pilha_push(&p, 3);
    Pilha_imprime(&p);
    Pilha_push(&p, 5);
    Pilha_imprime(&p);
    Pilha_push(&p, 6);
    Pilha_imprime(&p);
    getch();
    return 0;
}
