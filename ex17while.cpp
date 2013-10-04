#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{

int qt, num, soma=0;

printf ("Quantos numeros deseja somar? ");
scanf ("%d", &qt);


while (qt --){
printf ("Informe os numeros para serem somados: ");
scanf ("%d", &num);
soma = soma + num;
}

printf ("\nA Soma dos numeros informados: %d\n", soma);

fflush(stdin);
getchar();
return 0;
}
