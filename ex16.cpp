#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      
      int num, cont= 0, soma =0;
      float med =0; 
      printf ("Informe Numero Inteiro: ");
      scanf ("%d", &num);
      
      while (num != -1){
      soma = soma + num;
      cont ++;
      printf("Informe outro Numero Inteiro: "); 
      scanf("%d",&num);}
      
      med = soma / cont;
      printf ("\nMedia dos numeros informados: %.2f\n", med);
      
                     
               
fflush(stdin);
getchar();
return 0;
    
}
