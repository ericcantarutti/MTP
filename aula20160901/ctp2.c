#include <stdio.h>
#include <ctype.h>
int main()
{
    char frase[256];
    char olheiro;
    int indice = 0;
    printf("Digite uma frase: ");  // scanf() é usando para palavras, e não frase(ele nao pega os espaços, ele iria pegar apenas a primeira palavra)
    gets(frase);  // pega a frase do usuario, semelhante ao scanf
    olheiro = frase[indice];  // inicializa olheiro como 0
    while(olheiro != '\0')
    {
        frase[indice] = toupper(olheiro);
        indice++;
        olheiro = frase[indice];
    }
    printf("%s\n", frase);
return 0;
}
