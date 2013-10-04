#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      int num, outro;
    
      
      
      
      printf ("Informe Numero Inteiro: ");
      scanf ("%d", &num);
      
      if (num %3 ==0)
      {
              printf ("\nNumero informado: %d", num);
              printf ("\nNumero Divisil por 3 !!!");
      }      
      else if  (num %7 ==0)
      {
              printf ("\nNumero informado: %d", num);
              printf ("\nNumero Divisil por 7 !!!");
      }
      else if (num %13 ==0)
      {
              printf ("\nNumero informado: %d", num);
              printf ("\nNumero Divisivelor 13 !!!");
              fflush(stdin); 
      }
      
         
              else  
               if (num != 3,7,13){
              
               printf ("\Informe Outro Numero Inteiro: ");
               scanf ("%d", &outro);
              
               if  (outro % num == 0)
               printf ("\nNumero divisivel por %d", outro);
                      else
                      printf("\nNumero nao divisivel por %d", outro);
                      }
               
   fflush(stdin);
   getchar();
   return 0; 
               }
 
