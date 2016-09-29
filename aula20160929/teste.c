#include <stdio.h>

 int main(){
     int num, resultado, i;
     printf("Entre com um numero: ");
     scanf("%d", &num);
     resultado = 1;
     for(i =2; i<=num-1; i++){
        resultado= (resultado*i);
     }
        printf("O fatorial do numero %d e: %d", num, resultado);
 return 0;
 }
