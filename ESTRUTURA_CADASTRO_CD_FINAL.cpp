#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define TAM_LISTA 500

/***********************************ESTRUTURAS****/
typedef struct musicas
{
    char nomeMusica [30];
    float tempo;
    struct musicas *ponteiroProximoSTmusicas;
}stMusicas;

typedef struct Album
{
    int codigo;
    char nomeAlbum [30];
    char conjunto [20];
    int qtdMusicas;
    float preco;
    int ano;
    struct Album *ponteiroProximoSTalbum;
    struct musicas *ponteiroProximoSTmusicas;
}stAlbum;

stAlbum *ponteiroAlbum=NULL;
int nCodigo;
/***********************************prototipo das funções****/
stAlbum *AlocaNoAlbum();
stMusicas *AlocaNoMusicas();

void LiberaNoAlbum(stAlbum *p);
void LiberaNoAMusicas(stMusicas *p);
void InsertAlbum();
void InsertMusicas();
void ApagarMusicas();
void ApagaAlbum();
void ExibirAlbum();

/***********************************função aloca no album*****/
stAlbum *AlocaNoAlbum()
{  return (stAlbum*) calloc (1,sizeof(stAlbum));  }      
/***********************************função libera no album****/
void LiberaNoAlbum(stAlbum *p)
{  free(p);  }
/***********************************função aloca no musicas***/
stMusicas *AlocaNoMusicas()
{  return (stMusicas*) calloc (1,sizeof(stMusicas));  }  
/***********************************função libera no musicas**/
void LiberaNoAMusicas(stMusicas *p)
{  free(p);  }

/***********************************função insert album*******/
void InsertAlbum()
{
    stAlbum *ponteiroTEMPalbum = AlocaNoAlbum(), *p;
   
    printf("CADASTRAR CD\n\n");
    
    printf("Digite o codigo do cd: ");
    fflush(stdin);
    scanf("%d", &ponteiroTEMPalbum->codigo);
    
    printf("Digite o nome: ");
    fflush(stdin);
    gets(ponteiroTEMPalbum->nomeAlbum);
     
    printf("informe Nome do Conjunto: ");
    fflush(stdin);
    gets(ponteiroTEMPalbum->conjunto);
    
    printf("informe Quantidade de Musicas: ");
    fflush(stdin);
    scanf("%d", &ponteiroTEMPalbum->qtdMusicas);
    
    printf("informe Preco: ");
    fflush(stdin);
    scanf("%f", &ponteiroTEMPalbum->preco);
    
    printf("informe Ano: ");
    fflush(stdin);
    scanf("%d", &ponteiroTEMPalbum->ano);
    
                if (ponteiroAlbum == NULL)
                    ponteiroAlbum = ponteiroTEMPalbum;
                else
                {
                    for (p = ponteiroAlbum; p->ponteiroProximoSTalbum; p=p->ponteiroProximoSTalbum);
                    p->ponteiroProximoSTalbum = ponteiroTEMPalbum;
                }
    printf("CADASTRO ALBUM REALIZADO COM SUCESSO");
    fflush(stdin);
    getchar();
}
/***********************************função insert musicas*******/
void InsertMusicas()
{
     stMusicas *ponteiroTEMPmusicas, *p;
     ponteiroTEMPmusicas = AlocaNoMusicas();
     stAlbum *ponteiro2=ponteiroAlbum;
   
     
     printf("INFORME CODIGO ALBUM PARA INSERIR MUSICAS: \n");
     scanf("%d", &nCodigo);
     
    
     while(ponteiro2) {
        if(ponteiro2->codigo == nCodigo)
           break;
        ponteiro2 = ponteiro2->ponteiroProximoSTalbum;
     }
     
    if(!ponteiro2) {
        printf("Crie primeiro um Album!");            
        return;
     }
     
         printf("Digite o nome da Musica");
         scanf("%s",&ponteiroTEMPmusicas->nomeMusica);
         printf("Digite o tempo da musica (em segundos)");
         scanf("%f",&ponteiroTEMPmusicas->tempo);
         
         
         if (ponteiro2->ponteiroProximoSTmusicas == NULL)
             ponteiro2->ponteiroProximoSTmusicas=ponteiroTEMPmusicas;
        
        
         else
         {
             for (p=ponteiro2->ponteiroProximoSTmusicas; 
                  p->ponteiroProximoSTmusicas; 
                  p=p->ponteiroProximoSTmusicas)
                  p->ponteiroProximoSTmusicas=ponteiroTEMPmusicas;
                 }
}
/***********************************função apagar musicas*******/
void ApagarMusicas()
{
     stMusicas *p= ponteiroAlbum->ponteiroProximoSTmusicas;
     for(p=ponteiroAlbum->ponteiroProximoSTmusicas; 
         p->ponteiroProximoSTmusicas->ponteiroProximoSTmusicas;
         p=p->ponteiroProximoSTmusicas)
    
          LiberaNoAMusicas(p->ponteiroProximoSTmusicas);
     }
/***********************************função apagar album*******/
void ApagaAlbum()
{
stAlbum *p = ponteiroAlbum;
ponteiroAlbum=p->ponteiroProximoSTalbum;
LiberaNoAlbum(p);
}

/***********************************função exibir album****/

void Exibir()
{
stAlbum *p=ponteiroAlbum;
stMusicas *p2;


if (p == NULL)
     {
     printf("album não existe");
     return;
     }
     
else
    {                 
while(p != NULL) {
printf("\nNome CD: %s",p->nomeAlbum);
printf("\nNome Conjunto: %s",p->conjunto);
printf("\nQuantidade Musicas: %d",p->qtdMusicas);
printf("\nPreco: %.2f",p->preco);
printf("\nAno: %d",p->ano);
for(p2=p->ponteiroProximoSTmusicas;
    p2;
    p2=p2->ponteiroProximoSTmusicas) {
       printf("\n\tNome Musicas: %s", p2->nomeMusica);
       printf("\n\tTempo da Faixa: %2.f", p2->tempo);
    }
p=p->ponteiroProximoSTalbum;
     }
}
}
/***********************************FUNÇÃO PRINCIPAL****/
int main ()
{
InsertAlbum();
InsertMusicas();
Exibir();
ApagarMusicas();
Exibir();
ApagaAlbum();
Exibir();
fflush(stdin);
getchar();
}

