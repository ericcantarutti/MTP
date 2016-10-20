#include <stdio.h>
#include <string.h>
#define NCHAR 256

void gravarDados();
void lerDados();
int main(){
    int opcao;
    do {
        printf("1 - Escrever Informacoes\n");
        printf("2 - Ler Informacoes\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        getchar();  // consumir o ENTER
        if(opcao == 1 )
            gravarDados();
        if(opcao == 2 )
            lerDados();
        }
     while(opcao);
    return 0;
}

void gravarDados(){
        FILE * arquivo;
        char nome[NCHAR];
        int idade;
        float altura; // em metros
        printf("Entre com o nome: ");
        fgets(nome, NCHAR, stdin);
        nome[strlen(nome) - 1] = '\0'; //exclui o caracter enter pois ele é gravado no final do arquivo
        printf("Entre com a idade: ");
        fscanf(stdin, "%d", &idade);
        printf("Entre com a altura: ");
        fscanf(stdin, "%f", &altura);
        arquivo = fopen("info.txt", "w");
        if (arquivo == NULL)
            fprintf(stderr, "Erro na gravacao do arquivo!\n");
        else {
        fprintf(arquivo, "%s\n%d\n%f\n", nome, idade, altura);
        fclose(arquivo);
        }
}

void lerDados(){
        FILE * arquivo;
        char nome[NCHAR];
        int idade;
        float altura; // em metros
        arquivo = fopen("info.txt", "r");
        if (arquivo == NULL)
        fprintf(stderr, "Arquivo nao existe!\n");
        else {
        fgets(nome, NCHAR, arquivo);
        fscanf(arquivo, "%d\n%f\n", &idade, &altura);
        fclose(arquivo);
        printf("Nome: ");
        fprintf(stdout, "%s\n", nome);
        printf("Idade: ");
        fprintf(stdout, "%d\n", idade);
        printf("Altura: ");
        fprintf(stdout, "%f\n", altura);
        }
}
