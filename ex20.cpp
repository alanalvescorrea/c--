#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{

int vetX[5], vetY[5], i;

for (i=0; i<=4; i++)
{
printf("Informe um numero: ");
scanf("%d", &vetX[i]);
}

          for (i=0; i<=4; i++)
          {
          vetY[i] = vetX[4-i];
          }
              printf("\n");
                    
                    for (i=0; i<=4; i++)
                    {
                    printf("Posicao Inversa:%d\n",vetY[i]);
                    }
fflush(stdin);
getchar();
return 0;
}

