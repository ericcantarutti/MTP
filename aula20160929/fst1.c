#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quo_rest();
int main(){
    quo_rest();
   return 0;
}
void quo_rest(){
    int pri, seg, quo;
    float rest;
    printf("Entre com o primeiro numero inteiro: ");
    scanf("%d", &pri);
    printf("Entre com o segundo numero inteiro: ");
    scanf("%d", &seg);
    quo = (pri/seg);
    rest = (pri%seg);
    printf("O quociente da divisao e: %d\n", quo);
    printf("O resto da divisao e: %0.2f", rest);
    }
