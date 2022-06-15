#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saque, not100, not50, not10, not5, not1;
    printf("Digite um valor para ser sacado: ");
    scanf("%i", &saque);

    not100= saque/100;
    saque= saque%100;
    not50= saque/50;
    saque= saque%50;
    not10= saque/10;
    saque= saque%10;
    not5= saque/5;
    saque= saque%5;
    not1= saque/1;
    saque= saque%1;

    printf("O numero de notas para o saque, sao %i de 100, %i de 50, %i de 10, %i de 5 e de %i 1",
           not100, not50, not10, not5, not1);



    return 0;
}
