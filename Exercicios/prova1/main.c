#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// THIAGO FABRICIO DE OLIVEIRA

int main(){

    //Ator
    char nomeAtor[200];
    char personagemAtor[200];
    int idadeAtor;
    float salarioAtor;

    //Figurante
    char nomeFigurante[200];
    int qntdCenas;
    float dinheiroCenas;

    //Equipamento
    char tipoEquipamento[200];
    int qntdDiasEquipamento;
    float custoPorDiaEquipamento;

    //Orçamento
    float gastoAtores = 0;

    FILE *listaAtores, *listaFigurantes, *listaEquipamento, *listaCustoAtores;

    int opcao, opcaoInfor, i = 0, j = 0;
    char lixo;


    printf("======= MENU =======\n\n");
    printf("1 - Cadastro de Ator\n");
    printf("2 - Cadastro de Figurante\n");
    printf("3 - Aluguel de Equipamento\n");
    printf("4 - Informacaos\n");
    printf("5 - Sair\n");
    scanf("%i", &opcao);


    if (opcao == 1){

        printf("===== CADASTRO DE ATORES =====\n\n");
        listaAtores = fopen("listadeatores.txt", "a");

        if (listaAtores == NULL){

            printf("Erro, nao foi possivel abri a lista para cadastro");
        }
        if (listaAtores != NULL){

            while (i != 2){

                printf("Digite o nome do ator: ");
                scanf("%c", &lixo);
                gets(nomeAtor);
                fprintf(listaAtores, nomeAtor);
                printf("Digite o nome do personagem do ator: ");
                gets(personagemAtor);
                fprintf(listaAtores, "\n%s", personagemAtor);
                printf("Idade do Ator: ");
                scanf("%i", &idadeAtor);
                fprintf(listaAtores, "\n%i", idadeAtor);
                printf("Salario do Ator: ");
                scanf("%f", &salarioAtor);
                fprintf(listaAtores, "\n%.2f", salarioAtor);
                gastoAtores = gastoAtores + salarioAtor;
                fprintf(listaAtores, "\n\n");
                printf("Deseja fazer um novo cadastro ? Digite 1 para sim e 2 para nao\n");
                scanf("%i", &i);


            }
            fclose(listaAtores);
        }

        listaCustoAtores = fopen("listadecustoatores.txt", "a");
        if (listaCustoAtores == NULL ){

            printf("ERRO NA EXECULCAO");

        }
        if (listaCustoAtores != NULL ){

            j = fscanf(listaCustoAtores, "%f");

            if (j == 0){

                fprintf(listaCustoAtores, "%f", gastoAtores);
            }
            if (j != 0){

                j = j + fscanf(listaCustoAtores, "%f");
            }
        }
        fclose(listaCustoAtores);
    }

    if (opcao == 2){


        printf("===== CADASTRO DE FIGURANTES =====\n\n");
        listaFigurantes = fopen("listadefigurantes.txt", "a");

        if (listaFigurantes == NULL){

            printf("Erro, nao foi possivel abri a lista para cadastro");
        }
        if (listaFigurantes != NULL){

            while (i != 2){

                printf("Digite o nome do Figurante: ");
                scanf("%c", &lixo);
                gets(nomeFigurante);
                fprintf(listaFigurantes, nomeFigurante);
                printf("Numero de cenas a serem feitas: ");
                scanf("%i", &qntdCenas);
                fprintf(listaFigurantes, "\n%i", qntdCenas);
                printf("Salario a ser recebido por cada cena: ");
                scanf("%f", &dinheiroCenas);
                fprintf(listaFigurantes, "\n%.2f\n", dinheiroCenas);
                fprintf(listaFigurantes, "\n\n");
                printf("Deseja fazer um novo cadastro ? Digite 1 para sim e 2 para nao\n");
                scanf("%i", &i);

            }
        }

        fclose(listaFigurantes);
    }

     if (opcao == 3){


        printf("===== Aluguel DE Equipamento =====\n\n");
        listaEquipamento = fopen("listadeequipamentos.txt", "a");

        if (listaFigurantes == NULL){

            printf("Erro, nao foi possivel abri a lista para cadastro");
        }
        if (listaFigurantes != NULL){

            while (i != 2){

                printf("Digite o tipo do equipamento: ");
                scanf("%c", &lixo);
                gets(listaEquipamento);
                fprintf(listaEquipamento, tipoEquipamento);
                printf("Quantidade de dias a ser alugado: ");
                scanf("%i", &qntdDiasEquipamento);
                fprintf(listaFigurantes, "\n%i", qntdCenas);
                printf("Custo por dia de aluguel: ");
                scanf("%f", &custoPorDiaEquipamento);
                fprintf(listaEquipamento, "\n%.2f", custoPorDiaEquipamento);
                fprintf(listaEquipamento, "\n\n");
                printf("Deseja fazer um novo Aluguel ? Digite 1 para sim e 2 para nao\n");
                scanf("%i", &i);

            }

        fclose(listaEquipamento);
        }
     }

     if (opcao == 4){

        printf("======== INFORMACOES ========\n\n");
        printf("1 - Gasto Total com atores ");
        scanf("%i", &opcaoInfor);

        if (opcaoInfor == 1){

            printf("===== GASTO COM ATORES =====\n\n");
            listaCustoAtores = fopen("custocomatores.txt", "r");

            if (listaCustoAtores == NULL ){

                printf("ERRO DE EXECULCAO");
            }
            if (listaCustoAtores != NULL ){

                j = fscanf(listaCustoAtores, "%f");
                printf("%f", j);
            }



            }
        }


     if (opcao == 5){

     }


     return 0;

}
