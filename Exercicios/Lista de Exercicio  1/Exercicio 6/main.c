#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num [10], i, maior = 0, menor = 0;

    for (i = 0; i < 10; i++){

      printf("Digite valor para a posicao %i do vetor: ", i+1);
      scanf("%i", &num[i]);

      if (num[i] < menor){

        menor = num[i];

      }
      if (num[i] > maior){

        maior = num [i];
      }

    }

    printf("O maior numero eh %i, e o menor eh %i", maior, menor);

    return 0;
}
