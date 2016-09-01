#include <stdio.h>
int main(){
    double numero, i, fatorial; // usando double da o fatorial maior que 12
 printf("Entre com umm numero: ");
 scanf("%lf",&numero);
 fatorial = 1; // so para incializar com elemento neutro da multiplicação
 for(i=1; i <= numero; i++)
    fatorial = fatorial*i;
 printf("O resultado e: %.2lf\n", fatorial);
return 0;
}
