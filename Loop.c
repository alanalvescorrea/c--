#include <stdio.h>
main ()
{
    int cont = 0, loop;
    loop = ++cont;
    printf ("Loop=%d, Cont=%d\n", loop, cont);

    loop= cont++;
    printf ("Loop=%d, Cont=%d\n", loop, cont);
    
     fflush(stdin);
     getchar();
     return 0;

}
