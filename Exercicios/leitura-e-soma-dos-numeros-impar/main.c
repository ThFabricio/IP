#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma, aux;
    soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    aux = 1;

    while (aux <= n){
        if (aux%2 == 1){

            soma += aux;
        }

     aux +=1;
    }
     printf("A soma do primos do intervalo desse numero eh: %i", soma );

     return 0;
}
