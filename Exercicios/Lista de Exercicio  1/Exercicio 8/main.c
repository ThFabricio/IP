#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[8], x, y, i, soma;

    for (i = 0; i < 8; i++){

    printf("Digite um numero: ");
    scanf("%i", &v[i]);
    }

    printf("Digite uma cordenada para x entre 1 e 8: ");
    scanf("%i", &x);

    printf("Digite uma cordenada para y entre 1 e 8: ");
    scanf("%i", &y);

    soma = (v[x-1]) + (v[y-1]);
    printf("A soma das duas cordenadas do vetor eh %i", soma);

    return 0;
}
