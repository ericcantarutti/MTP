#include <stdio.h>
#include <string.h>

void gravarDados();

int main(){
    int opcao, ndados, i;
    char nomearq[256];
    int * dados = NULL;
    do {
        printf("Quantos dados aleatorio(s) voce deseja gerar? \n");
        scanf("%d", &ndados);
        dados = (int *)malloc(ndados*sizeof(int));
        printf("\nDigite o nome do arquivo (Lembre-se de por .txt): ");
        scanf("%s", nomearq );
        for (i = 0; i < ndados; i++)
        {
           dados[i] = rand()%100;
           printf("\n%d ", dados[i]);
        }
            gravarDados(dados,ndados,nomearq);
          free(dados);
        printf("\nDigite 0 para sair e 1 para continuar\n");
        scanf("%d", &opcao);
        }
     while(opcao);
    return 0;
}

void gravarDados(int *dados, int ndados, char * nomearq){
        FILE * arquivo;
        int i;
        arquivo = fopen(nomearq, "w");
        if (arquivo == NULL)
            fprintf(stderr, "Erro na gravacao do arquivo!\n");
        else {
          for (i = 0; i < ndados; i++)
        {
           fprintf(arquivo, "\n%d", dados[i]);
        }
        fclose(arquivo);
        }
}
