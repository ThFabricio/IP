#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, fatoracao, divisao, resto;
    printf("Digite um numero inteiro para ser fatorado: ");
    scanf("%i", &numero);

    fatoracao= 2;

    while (numero > 1 )
    {

        resto = numero%fatoracao;

        if (resto == 0)
        {
            divisao= numero/fatoracao;
            printf("%i|%i\n", numero, fatoracao);
            numero = divisao;

        }
        if (resto > 0)
        {

            fatoracao ++;
        }

    }
    printf("1");

    return 0;
}

