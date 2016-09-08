#include <stdio.h>
#include<stdlib.h>

int main()
{
	int numero, i=0, vetor[10], aux, j=10;
	float soma = 0, media;
	for (i = 0; i < 10; i++){
	printf("Insira o %d numero de 10: ", i+1);
	scanf("%d", &vetor[i]);
   }
      for(i=0, j=9;j>=5; j--, i++) 
	  {
      	aux = vetor[j];
      	vetor[j] = vetor[i];
      	vetor[i] = aux;
      }
      for(i=0; i<10 ; i++)
	printf("%d", vetor[i]);
return 0;
}
