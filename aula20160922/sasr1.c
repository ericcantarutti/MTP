#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void chat();
int main(){
  srand(time(0));
  char frase[256];
  printf(" ** Bom dia\n");
 do{
    fgets(frase, sizeof(frase), stdin);
    chat();
    } while(strncmp(frase,"tchau",5) != 0);
    printf(" ** Tchau, ate a proxima!\n");
   return 0;
}
void chat(){
    switch(rand()%7) {// modulo 7 por haver 7 op�oes possiveis
      case 0: printf("Tudo bem?\n");
        break;
      case 1: printf("Ok\n");
        break;
      case 2: printf("LOL!\n");
        break;
      case 3: printf("Que legal\n");
        break;
      case 4: printf("Que chato!\n");
        break;
      case 5: printf("Fale mais sobre isso\n");
        break;
      case 6: printf("Sobre o que quer falar?\n");
        break;
    }
}
