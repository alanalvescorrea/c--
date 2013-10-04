#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
 int i, cont;
   
 for (i = 1; i<=100; i ++)
 if ((i %7 ==0)&(i %2 ==0)){
 cont= cont + i;
 printf("%d: ", i);
 puts ("multiplo positivo do numero 7 menor ou iguais a 100");
  
 
}
 fflush(stdin);
 getchar();
 return 0;
}
