#include <stdio.h>
main()
{
    int i;
    printf ("informe sua idade:");
    scanf ("%d", &i);

    if (i>70)
        printf ("Esta Velho!\n");
    else if (i>21)
        printf ("Esta Adulto\n");
    else
        printf ("Esta Joven\n");
        
        fflush(stdin);
        getchar();
        return 0;

}
