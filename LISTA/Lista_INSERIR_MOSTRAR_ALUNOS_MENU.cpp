#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>

typedef struct Lista 
{
        char nome[30];
        float nota1;
        float nota2;
        float nota3;
        float media;
        struct Lista *prox; 
}Nota;
/*****************VARIAVEIS***********************/
int Opt=1;
Nota *pLista= NULL;
Nota*PegaNodo();
void LiberaNodo(Nota*Nodo);
void Insert();
void PrintNota();
void Opcoes();
/******************FUNÇÕES***********************/
Nota *PegaNodo ()
{
              return (Nota*)calloc(1,sizeof(Nota));
}
//==============================
void LiberaNodo (Nota*Nodo)
{
     free(Nodo);
}
//==============================
void Insert()
{
     Nota *temp = PegaNodo(),*p=pLista;
     if (pLista == NULL)
     pLista=temp;
     else {
     for (p = pLista; p->prox;p = p -> prox);
          p->prox=temp;
          }
     printf("Digite nome \n");
     scanf("%s",&temp->nome);
     printf("Digite sua  nota \n");
     scanf("%f",&temp->nota1);
     printf("Digite sua  nota \n");
     scanf("%f",&temp->nota2);
     printf("Digite sua  nota \n");
     scanf("%f",&temp->nota3);
     temp->media = (temp->nota1 + temp->nota2 + temp->nota3)/3;
}
/*********************PrintLista*******************/
void PrintLista()
{ 
     Nota *p=pLista;
     while(p)
     {
           printf("Nome: %s\nMedia: %f\n =============================\n",p->nome,p->media);
           p = p->prox;
     }
}
/*******************OPCOES***********************/
void Opcoes()
{
while(Opt == 1 || Opt == 2){
system("cls");
printf("1 -> Inserir Aluno \n\n2 -> Mostrar Alunos\n\n") ;
scanf ("%d",&Opt);


             switch (Opt)
             {
                    case 1 : 
                         system ("cls");
                         Insert();
                         getch();
                         break;
                    case 2 :
                         system ("cls");
                         PrintLista();
                         getch();
                         break;
                         
                         }
             Opcoes();
}
}
/*******************MAIN*************************/
int main ()
{
Opcoes();
getch();
}

    


