#include <stdio.h>
#include <ctype.h>
int main()
{
    char frase[256];
    char olheiro;
    int indice = 0;
    printf("Digite uma frase: ");  // scanf() � usando para palavras, e n�o frase(ele nao pega os espa�os, ele iria pegar apenas a primeira palavra)
    gets(frase);
    olheiro = frase[indice];
    while(olheiro != '\0')
    {
        frase[indice] = tolower(olheiro);
        indice++;
        olheiro = frase[indice];
    }
    printf("%s\n", frase);
return 0;
}
