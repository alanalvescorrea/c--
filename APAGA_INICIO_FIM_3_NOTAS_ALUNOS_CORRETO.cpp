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

Aluno *pstLista=NULL;
Aluno *AlocandoStrutura();
//Declaração de Funções
void LiberandoEstrutura(Aluno *p);
void Insert();
void PrintLista();
void ApagaInicio();
void ApagaFim();
//Função Princial
int main()
{

Insert();
Insert();
Insert();
printf("\n-------------Inclui 3 Registros-------------------------------------------\n");
PrintLista();
printf("\n-------------Exclui Primeiro Registro-------------------------------------\n");
ApagaInicio();
PrintLista();
printf("\n-------------Exclui Ultimo Registro---------------------------------------\n");

ApagaFim();
PrintLista();

fflush(stdin);
getchar();
}
Aluno *AlocandoStrutura()
{
return (Aluno *) calloc(1,sizeof(Aluno));
}
void LiberandoEstrutura(Aluno *p)
{
free(p);
}
//Função Inserir
void Insert()
{
Aluno *temp,*p;
temp = AlocandoStrutura();
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
//Função Exibir Dados
void PrintLista()
{
Aluno *p = pstLista;
while(p != NULL) {
printf("%s",p->nome);
printf("\nNota 1: %.2f\n",p->nota1);
printf("Nota 2: %.2f\n",p->nota2);
printf("Nota 3: %.2f\n",p->nota3);
printf("Media: %.2f\n",p->media);
p=p->prox;
}
}
//Função Apagar no Início - primeiro bloco
void ApagaInicio()
{
Aluno *p = pstLista;
pstLista=p->prox;
LiberandoEstrutura(p);
}
//Função Apagar No Fim - Último Bloco
void ApagaFim()
{
Aluno *p =pstLista;
for(p=pstLista;p->prox->prox;p=p->prox);
LiberandoEstrutura(p->prox);
p->prox = NULL;
}
