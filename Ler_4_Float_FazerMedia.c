#include <stdio.h>
main()
{
    float n1,n2,n3,n4;

    printf ("Entre com as 4 notas: \n");
    scanf ("%f" "%f" "%f" "%f", &n1, &n2, &n3, &n4);

    printf ("A Media Final eh = %.2f\n\n", (n1+n2+n3+n4)/4);
    
    fflush(stdin);
    getchar();
    return 0;
}
