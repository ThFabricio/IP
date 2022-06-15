#include <stdio.h>
#include <stdlib.h>

int main()
{
   int conta = 0, numb, cpar = 0, mpar, qtndp = 0, cimpar, mimpar, qntdi = 0;
   printf("Digite um numero inteiro: ");
   scanf("%i", &numb);

   for (conta = 1; conta <= 16; conta++){

    if (numb%2 == 0 && numb <= 10){
        cpar = cpar + numb;
        qtndp ++;
    }
    if ((numb%2 != 0) || (numb < 100)){
        cimpar = cimpar + numb;
        qntdi ++;
    }
     printf("Digite um numero inteiro: ");
     scanf("%i", &numb);

   }

    mpar = cpar/qtndp;
    printf("A media dos numeros pares, menores do que 10 eh: %i\n", mpar);
    mimpar = cimpar/qntdi;
    printf("A media dos numeros impares, menores do que 100 eh: %i", mimpar);

   return 0;
}
