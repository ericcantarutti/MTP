#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void iguais();
int main(){
   iguais();
   return 0;
}
void iguais(){
    int vetor1[5], vetor2[5];;
    int i, j, l,n;
    for(i=0; i<5; i++){
    printf("Escreva o valor %d do vetor A com  elementos: \n", i);
    scanf("%d", &vetor1[i]);
    }
    for(j=0; j<5; j++){
    printf("Escreva o valor %d do vetor B com  elementos: \n", j);
    scanf("%d", &vetor2[j]);
    }
    for (i=0; i<5; i++){
    printf("%d ", vetor1[i]);
    }
    printf("\n");
    for (j=0; j<5; j++){
    printf("%d ", vetor2[j]);
    }
   for(l=0; l<5; l++){
        for (n=0; n<5; n++){
        if(vetor1[l]==vetor2[n]){
            printf("\n");
            printf(" %d ", vetor1[l]);
        }
    }
    }
}
