#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      float altura, pesoF, pesoM;
      char sexo;
      
      printf("CALCULO PESO IDEAL");
      printf("\nFormula do Dr. Devine - 1974");
      printf("\n\n+++++++++++++++++++++++++++++\n\n");
      printf ("informe altura: ");
      scanf ("%f", &altura);
      fflush(stdin); 
      
      printf ("informe sexo: M ou F ?");
      scanf ("%c", &sexo);
      
      if (sexo == 'm')
      {
      pesoM = (72.7 * altura)-58;
      printf ("\nPeso ideal: %.2f", pesoM);
      }
      else
      {
      pesoF = (62.1 * altura)-44.7;
      printf ("Peso Ideal: %2.f", pesoF);
      }
          
      
  
      
   fflush(stdin);
   getchar();
   return 0; 
      }
