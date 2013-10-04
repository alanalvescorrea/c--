#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
   int Codigo;
   char Doado;
   char Nome[30];
   char Autor[30];
   char Editora[20];
   int Paginas;
} stLivros;

typedef struct {
   stLivros exatas[500];
   stLivros humanas[500];
   stLivros biomedicas[500];
} stBiblioteca;

//Prototipos das funcoes
void Cadastra(stLivros *pLivro);

//*****************************************************************************
// Funcao cadastra
void Cadastra(stLivros *pLivro)
{
 system("cls");
 printf("Cadastra Livro\n\n");
 printf("Digite o codigo: ");
 fflush(stdin);
 scanf("%d",&pLivro->Codigo);
 printf("O livro eh doado: ");
 fflush(stdin);
 scanf("%c",&pLivro->Doado);
 printf("Livro: ");
 fflush(stdin);
 scanf("%s",pLivro->Nome);
 printf("Autor: ");
 fflush(stdin);
 scanf("%s",pLivro->Autor);
 printf("Editora: ");
 fflush(stdin);
 scanf("%s",pLivro->Editora);
 printf("Paginas: ");
 fflush(stdin);
 scanf("%d",&pLivro->Paginas);   
 printf("\n\nLivro Cadastrado\n\n");     
 fflush(stdin);
 getch();
}
//*****************************************************************************


int main()
{
 stBiblioteca Biblioteca;
 char chOpcao;
 FILE *fp;
 int nContaExatas=0,nContaHumanas=0,nContaBiomedicas=0;
 
 memset(&Biblioteca,0x00,sizeof(stBiblioteca));
 
 while(1) {
   system("cls");
   printf("****** Menu ******\n");
   printf("1 - Cadastra\n2 - Consulta\n3 - Ler do disco\n4 - Grava em disco\n5 - Fim\n");
   printf("Digite a sua opcao: ");
   fflush(stdin);
   chOpcao=getch();
   switch(chOpcao) {
      case '1':
        Cadastra(&Biblioteca.biomedicas[0]);
        break;
      case '2':
        printf("\n%d\n",Biblioteca.biomedicas[0].Codigo);
        printf("%d - %d - %d\n",nContaBiomedicas,nContaExatas,nContaHumanas);
        fflush(stdin);
        getch();
        break;
      case '3':
        fp = fopen("Biblioteca.txt","rb");
        fread(&Biblioteca,sizeof(stBiblioteca),1,fp);
        fclose(fp);
        while(Biblioteca.biomedicas[nContaBiomedicas].Codigo != 0)
          nContaBiomedicas++;
        while(Biblioteca.exatas[nContaExatas].Codigo != 0)
          nContaExatas++;
        while(Biblioteca.humanas[nContaHumanas].Codigo != 0)
          nContaHumanas++;
        break;
      case '4':
        fp = fopen("Biblioteca.txt","wb");
        fwrite(&Biblioteca,sizeof(stBiblioteca),1,fp);
        fclose(fp);
        break;
      case '5':
        return 0;
        break;
   }
 }
 
 return 0;   
}
