//DIRETIVAS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define MAX 21

//ESTRUTURA
typedef struct Sapato{
        char marca[MAX];
        char modelo[MAX];
        char cor[MAX];
        int num;
        struct Sapato *prox;
        };
        
//VARIÁVEIS GLOBAIS
char marca[MAX], modelo[MAX], cor[MAX];
int num;
Sapato *topo;//ponteiro para o topo da pilha

//FUNÇÃO AUXILIAR LER DADOS 
void dados_sapato()
{
     system("cls");
     
     printf ("\nEntre com a marca do sapato: ");
     fflush (stdin);
     fgets (marca, MAX, stdin);
     
     printf ("Entre com o modelo do sapato: ");
     fflush (stdin);
     fgets (modelo, MAX, stdin);
     
     printf ("Entre com a cor do sapato: ");
     fflush (stdin);
     fgets (cor, MAX, stdin);
     
     printf ("Entre com o numero do sapato: ");
     fflush (stdin);
     scanf ("%d", &num);
}

//FUNÇÃO INSERIR
void push_sapato()
{
     dados_sapato();//chamando a função
     
     Sapato *pnovo=(Sapato*)malloc(sizeof(Sapato));//alocando memoria para os novos elementos
     strcpy(pnovo->marca,marca);
     strcpy(pnovo->modelo,modelo);
     strcpy(pnovo->cor,cor);
     pnovo->num=num;
     pnovo->prox=NULL;
     
     if(topo==NULL)//se a pilha estiver vazia
     topo=pnovo; //topo recebe o novo elemento
     
     else{
          pnovo->prox=topo; 
          topo=pnovo;
          }
}

//FUNÇÃO EXCLUIR
void pop_sapato()
{
     Sapato *aux;
     
     if(topo==NULL){
                    printf ("\n\nErro, pilha de sapatos vazia.\n\n");
                    return;
                    }
                    
                    else{
                         aux=topo;
                         topo=topo->prox;
                         free(aux);
                         }
}

//FUNÇÃO LISTAR
void listar_sapatos()
{
     Sapato *aux;
     
     aux=topo;
     
     while(aux!=NULL){
                      printf ("\t\t\tDADOS SAPATO\n\n");
                      printf ("Marca: %s", aux->marca);
                      printf ("Modelo: %s", aux->modelo);
                      printf ("Cor: %s", aux->cor);
                      printf ("Numero: %d", aux->num);
                      
                      aux=aux->prox;
                      } 
}

//FUNÇÃO PRINCIPAL
int main()
{
    char op;
    topo=NULL;//incializando a pilha como vazia
   
   do{
       system("cls");
       
       printf ("\t\t\tFABRICA DE SAPATO PALOMA & CIA");
       printf ("\n\n(E)mpilhar Sapato\n");
       printf ("(L)istar Estoque Sapatos\n");
       printf ("(D)esempilhar Sapato\n");
       printf ("(S)air do Programa\n\n");
       
       printf ("Digite a opcao: ");
       
       op=toupper(getche());
       
       switch(op){
                  case'E': push_sapato();
                  break;
                  case'L': listar_sapatos();
                  break;
                  case'D': pop_sapato();
                  break;
                  case'S': exit(0);
                  default: printf ("\n\nOpcao invalida, digite novamente.\n\n");
                  }       
                  system("PAUSE");
                  }while (op!='S');
    return (0);
}
