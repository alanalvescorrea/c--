#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
main() 
{ 

  int i, vet[5], soma=0;

  for (i=0; i<=4; i++)
  {
  printf("Informe um numero: ");
  scanf("%d", &vet[i]);
  }
   printf ("\n");
    
    
    
    for (i=0; i<=4; i++)
    {
    printf("Valores Informados: %d\n", vet[i]);
    }
  printf ("\n");
     
     
     
      for (i=0; i<=4; i++)
      {
      soma += vet[i];
      }
       
         printf ("Soma dos Elementos: %d", soma);


fflush(stdin);
getchar(); 
return 0;
}
  
