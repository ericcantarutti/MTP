#include <stdio.h>
int main(){
    float A, B ,C, media;
    printf("Entre com a primeira nota do aluno: ");
    scanf("%f", &A);
    printf("Entre com a segunda nota do aluno: ");
    scanf("%f", &B);
    printf("Entre com a terceira nota do aluno: ");
    scanf("%f", &C);
    media = ((A*2)+(B*3)+(C*5))/10;
    printf("A media do aluno e: %.2f\n", media);
return 0;
}
