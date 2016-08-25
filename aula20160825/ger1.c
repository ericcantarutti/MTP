#include <stdio.h>
int main(){
 srand(time(0));
 int numero, i, sorteio;
 sorteio = rand()%100;
 printf("%d\n", sorteio);
 for(i=1; i <= sorteio; i++){
  printf("Escolha um numero: \n");
   scanf("%d",&numero);
    if(numero > sorteio){
        printf("Alto! \n ");
    }
     else if(numero < sorteio){
        printf("baixo! \n ");
    }
 if(numero == sorteio) {
        printf("Voce Acertou!!\n ");
        break;
 }
}
return 0;
}
