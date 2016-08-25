#include <stdio.h>
# include <time.h>
int main(){
    srand(time(0));
    int numero, aleatorio, soma;
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    aleatorio = rand()%2;
    soma = (numero+aleatorio);
    printf("%d\n", aleatorio);
    if (soma%2 ==0)
    {
        printf("O numero e par. \n");
    }
    else
        {
    printf("O numero e impar. \n");
}
return 0;
}
