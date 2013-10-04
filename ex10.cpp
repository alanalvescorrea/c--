#include <stdio.h>
main()
{
int tempC;
float tempF;


printf("\n Temperatura Celsius    Temperatura Farenheit\n");
puts("+---------------------------------------------+");


     for (tempC = -100; tempC<=100; tempC += 10)
     {
     tempF = (tempC*1.8)+32;  
     printf("\t%d\t\t %.2f \n", tempC, tempF);
     puts("+---------------------------------------------+");
     }


puts ("            by Alan Correa");
fflush(stdin);
getchar();
return 0;
}
  
