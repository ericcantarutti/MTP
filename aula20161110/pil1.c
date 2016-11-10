#include <stdio.h>
#define MAXPILHA 10
typedef char DADO; // tamanho maximo da pilha
typedef struct Pilha_{ // muda o tipo da PIlha aqui
   int idtopo;
   DADO dados[MAXPILHA];
}Pilha;
void push(Pilha * ppilha, DADO elemento);
void pop(Pilha * ppilha);
DADO top (Pilha pilha);
int empty(Pilha pilha);

int main() {
    int i;
    Pilha pilha;
    pilha.idtopo = -1;  //pilha vazia
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
    printf("\nEstouro: ");
    for(i = 0; i < MAXPILHA + 1; i++){ // testa estouro de pilha
        push(&pilha, 'A' + i);
        printf("%c", top(pilha)); // testa top
    }
 return 0;
}
void push(Pilha * ppilha, DADO elemento){
    if(ppilha->idtopo + 1 < MAXPILHA){
      ppilha->idtopo++;
      ppilha->dados[ppilha->idtopo] = elemento;
    }
else
    fprintf(stderr, "\n ERRO: Estouro de pilha!\n");
}
void pop(Pilha * ppilha){
    if(ppilha->idtopo >= 0){
       ppilha->dados[ppilha->idtopo] = 0x0; //opcional, "limpa elemento"
       ppilha->idtopo--;
    }
    else
    fprintf(stdout, "\n ATENCAO: Pilha vazia!\n");
}
DADO top (Pilha pilha){
    return pilha.dados[pilha.idtopo];
}
int empty(Pilha pilha){
    return (pilha.idtopo ==-1);
}
