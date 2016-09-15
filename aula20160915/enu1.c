#include <stdio.h>
int main(){
    int numero;
    printf("Digite o numero do mes do ano em que voce nasceu: ");
    scanf("%d", &numero);
switch(numero)
{
case 1 :
printf("Voce nasceu no mes de janeiro!");
break;
case 2 :
printf("Voce nasceu no mes de fevereiro!");
break;
case 3 :
printf("Voce nasceu no mes de marco!");
break;
case 4 :
printf("Voce nasceu no mes de abril!");
break;
case 5 :
printf("Voce nasceu no mes de maio!");
break;
case 6 :
printf("Voce nasceu no mes de Junho!");
break;
case 7 :
printf("Voce nasceu no mes de julho!");
break;
case 8 :
printf("Voce nasceu no mes de agosto!");
break;
case 9 :
printf("Voce nasceu no mes de setembro!");
break;
case 10 :
printf("Voce nasceu no mes de outubro!");
break;
case 11 :
printf("Voce nasceu no mes de novembro!");
break;
case 12 :
printf("Voce nasceu no mes de dezembro!");
break;
default :
    printf("Valor de mes invalido!\n");
}
return 0;
}
