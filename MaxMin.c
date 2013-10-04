#include <stdio.h>
main()
{
    int num1, num2, max;

    printf ("Informe 1 numero: ");
    scanf ("%d", &num1);
    printf ("Informe outro numero: ");
    scanf ("%d", &num2);

    if (num1 > num2)
        max=num1;
    else
        max=num2;

    printf ("Maior numero  %d\n\n" , max);
    fflush(stdin);
    getchar();
    return 0;
}
