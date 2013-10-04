#include <stdio.h>
#include <string.h>


main()

{
    char str [25];
    int cont, i, j;
 
    printf ("Digite uma string: ");
    gets(str);
    printf("\nString digitada: %s", str);

    cont=0;
    
    for (i=0; str[i] != '\0'; i++) 
    { 
        if ( str[i] == 'a' )    
            cont = cont +1;         
    } 
    printf("\nNumero de caracteres a : %d", cont); 
   
    for(i = 0; i < strlen(str);++i)
    {
    if(str[i] == 'a')
       str[i] = 'b';
}
     
    printf("\nString alerada: %s", str);
   
   
    fflush(stdin);
    getchar();
    return 0;
    

}
