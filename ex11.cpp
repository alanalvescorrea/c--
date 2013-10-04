#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
 int i;
   
 for (i = 100; i>=1; i=i-1)
 printf("%d", i);

 fflush(stdin);
 getchar();
 return 0;
}
