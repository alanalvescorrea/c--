#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <math.h> 

main() 
{ 
       
 float res=0;
 int i, j;
     
 for (i = 0; i<=7; i ++)
 for (j = 0; j<=7; j++)
 
 res += ((2*j+1)*i) / (2*j+5);

  
printf("Resultado: %.2f\n", res);        
system("pause"); 
return 0; 
}      
