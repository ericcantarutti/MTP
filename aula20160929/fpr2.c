#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void apenas_letras();
int main(){
   apenas_letras();
   return 0;
}
void apenas_letras(){
    char frase[256];
    int i;
    printf("Escreva uma frase: ");
    gets(frase);
    for(i=0; i<strlen(frase); i++){
        if(isalpha(frase[i]))
            printf("%c", frase[i]);
    }
    }
