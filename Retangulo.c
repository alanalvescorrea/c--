#include <stdio.h>
main()
{
    float area_retangulo,largura,altura;

    printf ("Informe largura retangulo: ");
    scanf ("%f", &largura);
    printf ("\nInforme altura do retangulo: ");
    scanf ("%f", &altura);

    area_retangulo = largura*altura;
    printf ("\nArea retangulo: %f\n\n", area_retangulo);
     
    fflush(stdin);
    getchar();
    return 0;
}
