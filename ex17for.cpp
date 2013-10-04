#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{

int qt, i, num, soma=0;

printf ("Quantos numeros deseja somar? ");
scanf ("%d", &qt);


for (i=0; i<qt; i++) {
printf ("Informe os numeros para serem somados: ");
scanf ("%d", &num);
soma = soma + num;}

printf ("\nA Soma dos numeros informados: %d\n", soma);


fflush(stdin);
getchar();
return 0;

}
