#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{

int qt =0, num, soma=0;

printf ("Quantos numeros deseja somar? ");
scanf ("%d", &qt);
qt = qt-1;

do{
printf ("Informe os numeros para serem somados: ");
scanf ("%d", &num);
soma = soma + num;
}while (qt--);

printf ("\nA Soma dos numeros informados: %d\n", soma);

fflush(stdin);
getchar();
return 0;
}
