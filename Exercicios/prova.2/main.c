#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int op = 0, i = 1, idadePaci, telefonePaci;
    float refMinExa, refMaxExa;
    FILE *cadExame, *cadPaciente, *cadResultado, *impResult;
    char tipExame[200], nomePaciente [200], resultObt[200], uniMed[200], comp[200], buff;


    while(i !=0 ){


        //MENU
        printf("=== MENU ===\n");
        printf("1- Cadastra Exame\n");
        printf("2- Cadastra Paciente\n");
        printf("3- Cadastra Resultado\n");
        printf("4- Imprimir Resultado\n");
        printf("5- Sair\n");
        scanf("%i", &op);


        if (op == 1){

            printf("=== CADASTRA EXAME ===\n");
            cadExame= fopen("CadastroExame.txt", "w");

            if (cadExame == NULL){

                printf("ERRO");
            }
            if (cadExame != NULL){

                printf("NOME DO EXAME: ");
                scanf("%c", &buff);
                gets(tipExame);
                fprintf(cadExame, "%s\n", tipExame);
                printf("REFERENCIA MINIMA DO EXAME: ");
                scanf("%f", &refMinExa);
                fprintf(cadExame, "%f\n", refMinExa);
                printf("REFERENCIA MAXIMA DO EXAME: ");
                scanf("%f", &refMaxExa);
                fprintf(cadExame, "%f\n", refMaxExa);
                printf("UNIDADE DE MEDITA DO EXAME: ");
                gets(uniMed);
                fprintf(cadExame, "%s\n", uniMed);

            }
            fclose(cadExame);

        }
        if (op == 2){

            printf("== CADASTRO PACIENTE ===");
            cadPaciente = fopen("CadastroPaciente.txt", "w");

            if (cadPaciente == NULL){

                printf("ERRO");
            }
            if (cadPaciente != NULL){

                printf("NOME DO PACIENTE: ");
                scanf("%c", &buff);
                gets(nomePaciente);
                fprintf(cadPaciente, "%s\n", nomePaciente);
                printf("IDADE DO PACIENTE: ");
                scanf("%i", &idadePaci);
                fprintf(cadPaciente, "%i\n", idadePaci);
                printf("NUMERO DE TELEFONE: ");
                scanf("%i", &telefonePaci);
                fprintf(cadPaciente, "%i\n", telefonePaci);

            }
            fclose(cadPaciente);
        }
        if (op == 3){

            printf("== CADASTRO RESULTADO ===\n");
            cadResultado = fopen("CadastroResultado.txt", "w");

            if (cadResultado == NULL){

                printf("ERRO");
            }
            if (cadResultado != NULL){

                printf("NOME DO PACIENTE: ");
                scanf("%c", &buff);
                gets(nomePaciente);
                fprintf(cadResultado, "%s\n", nomePaciente);
                printf("NOME DO EXAME: ");
                gets(tipExame);
                fprintf(cadResultado, "%s\n", tipExame);
                printf("RESULTADO OBTIDO EM EXAME: ");
                gets(resultObt);
                fprintf(cadResultado, "%s\n", resultObt);
            }
            fclose(cadResultado);
        }
        if (op == 4){

            printf("=== IMPRESAO DE RESULTADO ===\n");
            impResult = fopen("CadastroResultado.txt", "r");
            if (impResult == NULL){

                printf("ERRO");
            }
            if (impResult != NULL){

                printf("DIGITE O NOME DO PACIENTE QUE DESEJA SABER O RESULTADO DO EXAME: ");
                scanf("%c", &buff);
                gets(nomePaciente);

                fscanf(impResult, "2");


            }

             fclose(impResult);
        }
        if (op == 5){

            i = 0;
        }
    }
}
