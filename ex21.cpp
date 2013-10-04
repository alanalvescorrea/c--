#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      
   int i, vet [10]= {1,2,3,4,5,6,7,8,9,10};
   
   for (i=0; i<10; i++) {
       printf ("\nVetor: %d", vet[i]);
       }
       
       printf ("\n\n");
       
       
        for (i=0; i<10; i++) {
        printf ("\nVetor: %d", vet[i-2]);
        }
       
              
fflush(stdin);
getchar();
return 0;

}
