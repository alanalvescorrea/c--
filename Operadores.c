#include <stdio.h>
main()
{
    int verdadeiro, falso;

    verdadeiro = (15 < 20);
    falso = (15 == 20);

    printf ("Verdadeiro = %d, Falso = %d\n",
            verdadeiro, falso);
            
    fflush(stdin);
    getchar();
    return 0;

}
