#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
#include<conio.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdio.h>
#define MAX 1000
int main(){

  char strcomespaco[MAX],str1[MAX], str2[MAX];
  int tamcomespaco,tam, i, j;

  printf("\nDigite uma palavra (ou uma frase):\n\n");
  gets(strcomespaco);

  tamcomespaco = strlen(strcomespaco);

  for(i=0,j=0;i<tamcomespaco;i++)
 {
    if(isalpha(strcomespaco[i]))
    {
        str1[j]=strcomespaco[i];
        j++;
    }
 }

str1[j]='\0';

tam = strlen(str1);

for (i=tam-1,j=0;i>=0;i--,j++)
str2[j] = str1[i];

str2[tam] = '\0';


if (strcmpi(str1,str2) == 0)
printf("\nA PALAVRA EH SIMETRICA!!\n\n");
else
printf("\nA PALAVRA NAO EH SIMETRICA!!\n\n");

fflush(stdin);
getchar();
return 0;
}
