#include <stdio.h>
#include <string.h>

void pares();
void impares();
int main(){
    char escolha[6];
    printf("Escolha par ou impar? ");
    gets(escolha);
   if (!strcmp(escolha, "par"))
         pares();
   else
      impares();
return 0;
}

void pares(){
 int i;
   for(i= 1; i <= 10; i++)
      if (i%2 == 0)
       printf("\n%d\n", i);
    }
void impares(){
  int i2;
   for(i2= 1; i2 <= 10; i2++)
      if (i2%2 != 0)
        printf("\n%d\n", i2);
    }

