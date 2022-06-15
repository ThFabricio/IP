#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x[50], i;

   for (i = 0; i < 50; i++){

    x[i] = pow(i, 2) - 1;

   }
   for (i = 0; i < 50; i++){

    printf("O valor de X na posicao %i, corresponde a %i\n", i+1, x[i]);

   }

   return 0;
}
