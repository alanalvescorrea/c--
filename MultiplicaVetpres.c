/* Programa que carregue dois vetores A e B, ambos com 5 elementos
 * de numeros inteiros, em seguida, gere um terceiro vetor C, tambem de
 * 5 elementos, tais que cada um deles seja o resultado da soma dos elementos de
 *  mesmo indice, respectivamente. Depois, mostre o resultado.*/

#include <stdio.h>

void main(void)
{
  int i,j,p;
  int veta[5];
  int vetb[5];
  int vetc[5];

  printf("\nVoce, entre com os elementos do vetor.\n\n");
 
 
  for (i=0; i<5; i++)
  {
  printf("Entre com o %i elemento do vetor 1: " ,i+1);
  scanf("%i",&veta[i]);

  printf("Entre com o %i elemento do vetor 2: ",i+1);
  scanf("%i",&vetb[i]);
  }

  for (p=0; p<5; p++)
  {
  vetc[p]=veta[p]+vetb[p];
  printf("\n a soma para elemento %i foi: %i \n", p+1, vetc[p]);
  }
  
  scanf("%i",&p);

  fflush(stdin);
  getchar();
  return 0;
  }
