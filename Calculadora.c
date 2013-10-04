#include <stdio.h>
main()
{
    char op;
    float num1, num2, resultado;

    printf ("Calculadora. Realize suas operacoes! ");
    scanf ("%f %c %f", &num1, &op, &num2);

    switch (op){
        case '+':
            resultado = num1 +num2;
            printf ("Resultado= %f\n\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf ("Resultado=%f\n\n", resultado);
            break ;
        case '/':
            resultado = num1 / num2;
            printf ("Resultado=%f\n\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf ("Resultado =%f\n\n", resultado);
            break;
        default:
            printf ("operador invalido\n\n");

    }
        fflush(stdin);
        getchar();
        return 0;
}
