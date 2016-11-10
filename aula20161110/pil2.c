#include <stdio.h>
#include <stdlib.h>
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
    int i;
    Pilha * pilha = NULL;  //pilha vazia
    //programa
    printf("Push: ");
    for(i = 0; i < 5; i++){
        push(&pilha, 'A' + i);  // testa push
        printf("%c", top(pilha));  // testa top
    }
    printf("\nPop:  ");
    while(!empty(pilha)){  // testa empty
        printf("%c", top(pilha));  // testa top
        pop(&pilha); // testa POP
    }
    printf("\n");
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
