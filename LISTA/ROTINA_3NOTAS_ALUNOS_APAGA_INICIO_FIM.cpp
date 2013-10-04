#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>



typedef struct NOTAS {

char nome[30];
float nota1;
float nota2;
float nota3;
float media;
int nIndice;
struct NOTAS *prox; //Ponteiro para o proximo
} Aluno;

Aluno *pstLista=NULL; //criei ponteiro para lista, esse ponteiro é Global. Apontando para lugar nenhum.

//criar uma função chamada getnode (PegaNodo), Função que o seu retorno um ponteiro.

Aluno *GetNode();
void FreeNode(Aluno *p);
void Insert();
void PrintLista();
void ApagaInicio();
void ApagaFim();



int main()
{

    Insert();
    Insert();
    Insert();



    PrintLista();
    printf("\n\n--------------------------------------------------------\n\n");
    ApagaInicio();
    PrintLista();
    printf("\n\n---------------------------------------------------------\n\n");
    
    ApagaFim();
    PrintLista();


    fflush(stdin);
    getchar();

}
Aluno *GetNode()

{
  return (Aluno *) calloc(1,sizeof(Aluno));
}



void FreeNode(Aluno *p)

{

 free(p);

}



void Insert()

{

 Aluno *temp,*p;    

   

 temp = GetNode();

 printf("Digite o nome: ");

 fflush(stdin);

 gets(temp->nome);

 printf("Digite a nota 1: ");

 fflush(stdin);

 scanf("%f",&temp->nota1);

  printf("Digite a nota 2: ");

 fflush(stdin);

 scanf("%f",&temp->nota2);

  printf("Digite a nota 3: ");

 fflush(stdin);

 scanf("%f",&temp->nota3);

 

 temp->media=((temp->nota1+temp->nota2+temp->nota3)/3);

 if(pstLista == NULL)

   pstLista = temp;

 else {

   for(p=pstLista;p->prox;p=p->prox);

   p->prox = temp;

 }

}



void PrintLista()

{

 Aluno *p = pstLista;

 

 while(p != NULL) {

    printf("\n%s",p->nome);

    printf("\nNota 1: %.2f",p->nota1);

    printf("\nNota 2: %.2f",p->nota2);

    printf("\nNota 3: %.2f",p->nota3);

    printf("\nMedia: %.2f",p->media);

    p=p->prox;     

 } 

}



void ApagaInicio()

{

     Aluno *p = pstLista;

     

     pstLista=p->prox;

     FreeNode(p);

}

void ApagaFim()

{

     Aluno *p =pstLista;

     for(p=pstLista;p->prox->prox;p=p->prox);

     FreeNode(p->prox);
     p->prox = NULL;

     }
