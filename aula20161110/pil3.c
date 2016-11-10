#include <stdio.h>
#include <stdlib.h>

void gravarDados();
typedef int DADO; // tamanho maximo da pilha

typedef struct Pilha_ {
  DADO topo;
  struct Pilha_ * proximo;
} Pilha;

void push(Pilha ** ppilha, DADO elemento);
void pop(Pilha ** ppilha);
DADO top (Pilha * pilha);
int empty(Pilha * pilha);

int main() {
    int i, numero, escolha;
    Pilha * pilha = NULL;  //pilha vazia
    do{
     printf("\nEntre com o numero inteiro positivo: ");
     scanf("%d", &numero);
    //programa
        if (numero >= 0){
        push(&pilha, numero);  // testa push
    }
    }
    while(numero >= 0);
    printf("\nDigite (1) para visualizar na tela ou (2) para gravar em arquivo.TXT\n");
    scanf("%d", &escolha);
    if(escolha == 1){
     printf("\nPop:  ");
     while(!empty(pilha)){  // testa empty
        printf("%d ", top(pilha));  // testa top
        pop(&pilha); // testa POP
    }
    printf("\n");
}
else{
    gravarDados(pilha);
}
 return 0;
}
void push(Pilha ** ppilha, DADO elemento){
   Pilha * novo = (Pilha*) malloc(sizeof(Pilha));
   novo->topo = elemento;
   novo->proximo = *ppilha;
   *ppilha = novo;
}
void pop(Pilha ** ppilha){
    Pilha * aux = NULL;
    if(!empty(*ppilha)){
       aux = (*ppilha)->proximo;
       free(*ppilha);
       *ppilha = aux;
    }
    else
    fprintf(stdout, "\n ATENCAO: Pilha vazia!\n");
}
DADO top (Pilha * pilha){
    return pilha->topo;
}
int empty(Pilha * pilha){
    return (pilha == NULL);
}
void gravarDados(Pilha * pilha){
        FILE * arquivo;
        arquivo = fopen("Arquivo.txt", "w");
        if (arquivo == NULL)
            fprintf(stderr, "Erro na gravacao do arquivo!\n");
        else {
        while(!empty(pilha)){  // testa empty
            fprintf(arquivo,"%d ", top(pilha));  // testa top
            pop(&pilha); // testa POP
        }

        fclose(arquivo);
        }
}
