#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      float x1, x2, y1, y2, dist=0;
   
   
      printf ("\nInforme Primeiro Ponto do Eixo P (x1): ");
      scanf ("%f", &x1);
      printf ("\nInforme Segundo Ponto do Eixo P (y1): ");
      scanf ("%f", &y1);
      
      printf ("\nInforme Primeiro Ponto do Eixo Q (x2): ");
      scanf ("%f", &x2);
      printf ("\nInforme Segundo Ponto do Eixo Q y2): ");
      scanf ("%f", &y2);
      
      dist = sqrt(((x2 * x1)*(x2 * x1)) + ((y2 - y1)*(y2 - y1)));
      
      printf ("\nDistancia: %.2f", dist);
      
               
   fflush(stdin);
   getchar();
   return 0; 
               }
 
