#include <stdio.h>
main ()

{
    int a, b, t;

    printf ("Digite Primeiro Numero: ");
    scanf ("%d", &a);

    printf ("\nDigite Segundo Numero: ");
    scanf ("%d", &b);

    if ( a < b ){
        t = a;
        a = b;
        b = t;

    }
    printf ("\nOrdenados: %d,%d\n", b ,a);
    
    fflush(stdin);
    getchar();
    return 0;
}
