#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      int num;
      char resposta;
      
      
      printf ("Informe Numero Inteiro: ");
      scanf ("%d", &num);
      
      if (num %2 ==0)
      {
              printf ("\nNumero informado: %d", num);
              printf ("\nNumero PAR !!!");
      }      
      else
      {
      printf ("\nNumero informado: %d", num); 
      printf ("\nNumero IMPAR !!!");
      }
      
   fflush(stdin);
   getchar();
   return 0;
   
}
