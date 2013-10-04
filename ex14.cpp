#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <math.h> 

main() 
{
  float fulano =1.50 , ciclano= 1.10 ;
  int ctAnos = 0 ;

  while (fulano >= ciclano)
  {
 
    fulano = fulano + 0.02;
    ciclano = ciclano + 0.03;
    ctAnos = ctAnos + 1;
   }
 
   printf("Altura de Fulano: %.2f", fulano); puts("mts");
   printf("Altura de Ciclano: %.2f", ciclano); puts("mts");
   printf("\nQuantidade de Anos Necessarios para que Fulano Seja maior que Ciclano: %d ", ctAnos);
   
   fflush(stdin);
   getchar();
   return 0; 

  }
