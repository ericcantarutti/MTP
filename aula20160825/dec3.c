#include <stdio.h>
# include <time.h>
int main(){
    srand(time(0));
    int dado1,dado2, dado3, decisao1 ,decisao2 ,decisao3, soma;
    printf("Jogar o Dado 1? (1) para Sim e (2) para não ");
    scanf("%d", &decisao1);
    if (decisao1 == 1){
     dado1 = (rand()%6 + 1);
     printf("%d\n", dado1);
    }
    else {
        return 0;
    }
    printf("Jogar o Dado 2? (1) para Sim e (2) para não ");
    scanf("%d", &decisao2);
    if (decisao2 == 1){
     dado2 = (rand()%6 + 1);
     printf("%d\n", dado2);
    }
    else {
        return 0;
    }
    printf("Jogar o Dado 3? (1) para Sim e (2) para não ");
    scanf("%d", &decisao3);
    if (decisao3 == 1){
     dado3 = (rand()%6 + 1);
     printf("%d\n", dado3);
    }
    else {
        return 0;
    }
    soma = (dado1+dado2+dado3);
    if (soma == 7 || soma == 11)
    {
        printf("O jogador ganhou \n");
    }
    else
        {
    printf("O jogador nao ganhou \n");
}
return 0;
}
