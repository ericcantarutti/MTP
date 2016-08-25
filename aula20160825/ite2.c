#include <stdio.h>
int main(){
 int base, potencia, resultado, i;
 printf("Entre com a base: ");
 scanf("%d",&base);
 printf("Entre com a potencia: ");
 scanf("%d",&potencia);
 if (base == 0){
    printf("O resultado e: 0");
    return 0;
 }
if (potencia == 0){
    printf("O resultado e: 1\n");
    return 0;
 }
 resultado = 1; // so para incializar com elemento neutro da multiplicação
 for(i=1; i <= potencia; i++)
    resultado = base*resultado;
 printf("O resultado e: %d\n", resultado);
return 0;
}
