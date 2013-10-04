#include <stdio.h>

int eh_positivo(int x);

int main()
 {
 int k;
 
 printf("Digite um numero: ");
 fflush(stdin);
 scanf("%d",&k);
 
 
      if(eh_positivo(k))
         printf("\n\nNumero POSITIVO!\n\n");
      else 
         printf("\n\nNumero NEGATIVO!\n\n");

 
 fflush(stdin);
 getchar();
 return 0;
}

 int eh_positivo(int k)
{
 return(k>=0);
}
