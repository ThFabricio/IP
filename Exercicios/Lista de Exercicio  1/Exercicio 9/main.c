#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet1 [10], vet2 [10], vet3 [10];

    int i, j, k, tamanho = 0;

    for (i = 0; i < 10; i++){

        printf("Digite um valor para a posicao %i do vetor 1: ", i+1);
        scanf("%i", &vet1[i]);
    }
    for (i = 0; i < 10; i++){

        printf("Digite um valor para a posicao %i do vetor 2: ", i+1);
        scanf("%i", &vet2[i]);

        for (j = 0; j < 10; j++){

            if (vet2[i] == vet1[j]){

                for (k = 0; k <= tamanho; k++){

                    if (vet2[i] == vet3[k]){

                        break;
                    }
                    if (k == tamanho){

                        vet3[k] = vet2 [i];
                        tamanho ++;
                        break;
                    }
                }
            }
        }
    }

    for (i=0; i < tamanho; i++){

        printf("%i\n", vet3[i]);

    }
        return 0;
}
