#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c,angulo;
    printf("Digite o valor do lado 1 do quadrado: ");
    scanf("%f",&b);
    printf("Digite o valor do lado 2 do quadrado: ");
    scanf("%f",&c);
    printf("Digite o valor do angulo em radianos: ");
    scanf("%f",&angulo);
    a = sqrt(pow(b,2.) + pow(c,2.)-((2*b*c))*cos(angulo));
    printf(" O outro lado do triangulo  e %.3f\n", a);
return 0;
}
