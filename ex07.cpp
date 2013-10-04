#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

main()
{
      
     
      float a, b, c;
      
      printf ("\nInforme lado A do tringulo : ");
      scanf ("%f", &a);
      printf ("\nInforme lado B do tringulo : ");
      scanf ("%f", &b);
      printf ("\nInforme lado C do tringulo : ");
      scanf ("%f", &c);
      
      if (a< b+c != b<a+c != c<a+b)
             {
             if ((a == b) && (b==c))
             printf ("\nTriangulo Equilatero");
             else if ((a!=b) && (b!=c) && (a!=c))
             printf ("\nTriangulo Escaleno");
             else
             printf ("\nTriangulo Isosceles");
              }
      
      else 
              {
              printf ("\nNao forma Triangulo");
              }
     
      
      fflush(stdin);
      getchar();
      return 0;
}
