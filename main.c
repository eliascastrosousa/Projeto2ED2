#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <string.h>
#include "trabFinal.h"
#include "arvoreAVL.h"
#include "arvoreLLRB.h"

int main()
{
    int esc, *vet, elem=2300;
    char *texto;

    FILE *f;
    f = fopen("massaDados.csv", "r");
    if(f == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }
    texto = f;

     if(texto == NULL){
        printf("Erro: texto!");
        exit(1);
     }

        //esc = Escolha_ordenacao(esc);

    //alocar memoria
    vet = Aloca_memoria(vet, elem);

    struct funcionario dados_func;
    dados_func = entraDados();

    x = insere_arvoreAVL(raiz,dados_func );
    if(x){
        printf("\nInserido de forma ordenada com sucesso!\n\n");
    }else{
        printf("\nNão foi possivel inserir o Funcionario!\n");
    }

    //funcionario entraDados(char texto, int *f){
    /*
    while(fgets(texto, 150, f)){
        func.id= atoi(strtok(texto, ";"));
        strcpy(func.nome, strtok(NULL, ";"));
        func.idade = atoi(strtok(NULL, ";"));
        strcpy(func.empresa, strtok(NULL, ";"));
        strcpy(func.departamento, strtok(NULL, ";"));
        func.salario = atof(strtok(NULL, "\n"));
        //insere_arvoreLLRB(*raiz, funcionario);
    }*/
    /*
    switch(esc){
        case 1:
            printf("\nEscolha 1\n\n");


        break;
        case 2:
            printf("\nEscolha 2\n\n");
        break;
        case 3:
            printf("\nEscolha 3\n\n");
        break;
        case 4:
            printf("\nEscolha 4\n\n");
        break;
        case 5:
            printf("\nAte a proxima!\n\n");
        break;
        default:
            printf("\nOpcao invalida!\n");
    }
    */
    fclose(f);

    return 0;
}
