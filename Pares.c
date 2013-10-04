#include <stdio.h>
main()
{
    int num;
    for (num = 2; num <=10; num+=2)
        printf ("%d\n\n" , num);
        
    fflush(stdin);
    getchar();
    return 0;
}
