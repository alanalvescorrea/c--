#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      
     
      float qtLitros, qtLatas, altura, raio, area=0, custoLatas=0;
      
      printf ("\nPROGRAMA QUE  CALCULA O CUSTO PARA PINTAR UM CILINDRO");
      printf ("\n");
      printf ("\nCusto da Lata de Tinta: R$ 20,00");
      printf ("\n");
      
      printf ("\nInforme Altura do Cilindro: ");
      scanf ("%f", &altura);
      printf ("\nInforme Raio do Cilindro: ");
      scanf ("%f", &raio);
      
      area = 3.14 * (raio*raio) + 2*3,14 * raio * altura; 
      printf ("\nArea do Cilindro: %.2f", area);
      
      qtLitros = area * 0.33;
      printf ("\nQuantidade de Lts tinta: %.2f", qtLitros);
      
      qtLatas = qtLitros / 5;
      printf ("\nQuantidade de Latas de tinta: %.2f", qtLatas);
      
      custoLatas = qtLatas * 20;
      printf ("\nCusto (R$) para pintar o tanque cilindrico: %.2f", custoLatas);
      
      fflush(stdin);
      getchar();
      return 0;
}
