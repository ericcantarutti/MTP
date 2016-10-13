#include <stdio.h>
#include <stdlib.h>

int TAMANHO = 0;
float * recebeNumero(float * vetor);
float media(float * vetor, int tamanho);
float retorne_maior(float * vetor);
float retorne_menor(float * vetor);
int main(){
  float * vetor = NULL;
  int opc;
  do{
      printf("Entre com um numero: ");
      vetor = recebeNumero(vetor);
      printf("Media %f\n", media(vetor, TAMANHO));
      printf("Outro? (0 - nao, 1 - sim): ");
      scanf("%d", &opc);
  }while(opc !=0 );
  printf("\nO maior numero e: %f\n", retorne_maior(vetor));
  printf("\nO menor numero e: %f\n", retorne_menor(vetor));
  free(vetor);
  return 0;
}
float * recebeNumero(float * vetor){
      TAMANHO++;
      if(vetor == NULL)
          vetor = (float *) malloc(sizeof(float));
      else
          vetor = (float *) realloc(vetor,TAMANHO*sizeof(float));
          scanf("%f", &vetor[TAMANHO-1]);
      return vetor;
}
float media(float * vetor, int tamanho){
    int i;
    float soma = 0.f;
    for(i = 0; i<tamanho; i++)
    soma = soma + vetor[i];
    return soma/tamanho;
}
float retorne_maior(float * vetor){
    int j;
    float maior;
    for(j=0; j<TAMANHO-1; j++){
       if(vetor[j]>vetor[j+1])
        {
        maior = vetor[j];
        }
        else
        {
        maior = vetor[j+1];
        }
    }
   return maior;
}
float retorne_menor(float * vetor){
    int l;
    float menor;
    for(l=0; l<TAMANHO-1; l++){
       if(vetor[l]<vetor[l+1])
        {
        menor = vetor[l];
        }
        else
        {
        menor = vetor[l+1];
        }
    }
   return menor;
}
