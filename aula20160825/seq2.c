#include <stdio.h>
int main(){
    float altura, base ,area;
    printf("Entre com a altura do triangulo: ");
    scanf("%f", &altura);
    printf("Entre com a base do triangulo: ");
    scanf("%f", &base);
    area = (altura*base)/2;
    printf("A area do triangulo e: %.2f\n", area);
return 0;
}
