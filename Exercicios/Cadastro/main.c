#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define letras 100

int main(){

    int escolha = 0, temp = 0, idade;
    FILE *lista;
    char nome[letras], cidade [letras];

    printf("======== Ola, Seja Bem Vindo (a) ==========\n\n");
    printf("Digite os numero correspondentes para fazer oque deseja:\n");
    printf("1- Cadastra nova pessoa.\n");
    printf("2- Procura de Cliente");
    scanf("%i", &escolha);

    if (escolha == 1){

        printf("Cadastro de pessoa\n");
        lista = fopen("lista.txt", "w");

        if (lista == 0 ){

            printf("Erro na abertura do arquivo");

        }
        else if (lista != 0){

            while (temp != 2){

                printf("Digite o nome a qual vc quer cadastra: ");
                scanf("%c", &nome);
                gets(nome);
                fprintf(lista, nome);
                printf("Digite o onde a pessoa mora: ");
                scanf("%s", &cidade);
                gets(cidade);
                fprintf(lista, "\n%s", cidade);
                printf("Digite a idade da pessoa: ");
                scanf("%d", &idade);
                fprintf(lista, "\n%i anos", idade);
                fprintf(lista, "\n\n");

                printf("Deseja efetuar novo cadastro, digite 1 para sim e 2 para nao: ");
                scanf("%i", &temp);

            }
        }

        fclose(lista);

    }
    if (escolha == 2){

        printf("Busca de pessoa de pessoa\n");
        lista = fopen("lista.txt", "r");

        if (lista == NULL){

            printf("Erro ao abri a lista");

        } else if (lista != NULL){


        }

    }

    return 0;
}
