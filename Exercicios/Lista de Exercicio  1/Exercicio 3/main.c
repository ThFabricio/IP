#include <stdio.h>
#include <stdlib.h>

int main()
{
    int algo, digito1, digito2, digito3;
    printf("Digite um numero: ");
    scanf("%i", &algo);

    if (algo > 0){
        digito1= algo/100;
        algo= algo%100;
        digito2= algo/10;
        algo= algo%10;
        digito3= algo/1;
    }

    if (algo < 0){
        algo = algo * -1;
        digito1= algo/100;
        algo= algo%100;
        digito2= algo/10;
        algo= algo%10;
        digito3= -algo/1;
    }

    printf("A inversao dos algarismo do numero eh: %i%i%i", digito3, digito2, digito1);

    return 0;
}
