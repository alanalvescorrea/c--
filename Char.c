#include <stdio.h>
main()
{
    char a;
    printf ("informe uma letra\n");
    scanf ("%c", &a);
    printf ("\n%c %d em decimal ", a,a);
    printf ("\n%o em octal, \n%x em hexadecimal \n", a,a);
    
    fflush(stdin);
    getchar();
    return 0;
}
