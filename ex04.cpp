#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      float f, c, result;
      int op;
   
      printf ("\nEscolha uma opcao: ");
      printf ("\nConverte de Fahrenheit para Celsius - digite 1 ");
      printf ("\nConverte de Celsius para Fahrenheit - digite 2 ");
      printf ("\nSair do Programa - digite 3\n");
      scanf ("%d", &op);
         
      switch (op)
      {
        
              
        case 1:
        printf ("\nInforme temperatura em Fahrenheit: "); 
               scanf ("%f", &f);
               result= (f-32)/ 1.8;
               printf ("\nCelsius: %.2f", result); puts (" graus C");
               break;
        case 2:
        printf ("\nInforme temperatura em Celsius: "); 
               scanf ("%f", &c);
               result= (c*1.8)+32;
               printf ("\nFahrenheit : %.1f", result); puts(" graus F");
               break;      
             
        case 3:
             exit(0);

        
        default: 
        printf ("Opcao invalida"); 
        break; 
        }
               
   fflush(stdin);
   getchar();
   return 0; 
               }
 



