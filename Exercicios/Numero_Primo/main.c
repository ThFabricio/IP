#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero, div, resto;
   div = 2;
   printf("Digite um numero inteiro: ");
   scanf("%i", &numero);

   if (numero > 1){do{
     resto= numero%div;
     div ++;
   }
   while (resto > 0);

   div --;

   if (resto == 0 && div== numero){

    printf("O numero eh primo");

   }
   if (resto == 0 && div < numero ){

    printf("O numero nao eh primo");

   }
   }else {
      printf("O numero 1 nao se encacha na definicao de primo");
   }

   return 0;
}
