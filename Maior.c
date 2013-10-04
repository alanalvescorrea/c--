#include <stdio.h>

main()
{
    int a, b, c;

    
printf ("Informe  numero: \n");
scanf ("%d", &a);  

printf ("Informe  numero: \n");
scanf ("%d", &b);

printf ("Informe  numero: \n");   
scanf ("%d", &c);
    
if (a > b)
        if (a > c)
        printf ("\n Maior: %d\n", a);

else    
        printf ("\nMaior: %d\n", c);
 

else 
        if (b>c)
        printf("\nMaior: %d\n", b);
            
else              
        printf ("\nMaior : %d\n", c);
    
fflush(stdin);
getchar();
return 0;
    
}
