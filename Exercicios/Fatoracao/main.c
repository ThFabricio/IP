#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, fatoracao, divisao, resto, mult;
    printf("Digite um numero inteiro para ser fatorado: ");
    scanf("%i", &numero);
    fatoracao = 2;
    mult = 0;

    while (numero > 1 ){
        while (numero%fatoracao == 0){
            divisao = numero/fatoracao;
            mult++;
            numero = divisao;
            if (numero == 1){
                printf("%i^%i", fatoracao, mult);
            }
        }
        if (numero != 1 && mult != 0){
            printf("%i^%i x ", fatoracao, mult);
        }
        if (numero%fatoracao > 0){
            fatoracao ++;
            mult = 0;
        }
    }
    return 0;
}
