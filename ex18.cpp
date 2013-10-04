#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
main() 
{ 

int vet1[5], vet2[5], i, cont, n;


printf ("Informe 5 valores\n");
 for (i=0; i<=4; i++)
  {cont = 0+i;
   printf ("Digite valor: ", cont);
    scanf ("%d", &n);
     vet1[i]=n;}
     
printf ("\n\n");
      
printf ("Informe 5 valores\n");
 for (i=0; i<=4; i++)
  {cont=0+i;
   printf ("Digite valor: ", cont);
    scanf ("%d", &n);
     vet2[i]=n;}
     
printf ("\n\n");
 for (i=0; i<=4; i++)
  printf ("Soma%d: ", vet1[i]+vet2[i]);
  
fflush(stdin);
getchar(); 
return 0;
}
  

 
