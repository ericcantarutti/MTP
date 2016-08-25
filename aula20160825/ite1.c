#include <stdio.h>
int main(){
    int numero, i, fatorial;
 printf("Entre com umm numero: ");
 scanf("%d",&numero);
 fatorial = 1; // so para incializar com elemento neutro da multiplicação
 for(i=1; i <= numero; i++)
    fatorial = fatorial*i;
 printf("O resultado e: %d\n", fatorial);
return 0;
}
