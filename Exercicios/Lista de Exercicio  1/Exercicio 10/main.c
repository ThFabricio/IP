#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, k;
    printf("Digite um numero inteiro para o tamanho do vetor: ");
    scanf("%i", &i);
    int v[i];

    for (j=0; j<i; j++){

        printf("Digite um valor para por no vetor: ");
        scanf("%i", &v[j]);

        for (k=0; k<j; k++){

            if (v[j] == v[k]){

                j--;
                printf("Valor ja existente no vetor\n");
            }
        }
    }

    for (j = 0 ; j < i; j++){

        printf("\t%i", v[j]);
    }

    return 0;
}
