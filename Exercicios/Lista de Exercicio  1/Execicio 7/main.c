#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numb[100], i;

   for (i = 0; i < 100; i++){

    numb[i] = i + 1;
    printf("\t%i", numb[i]);

   }

    return 0;
}
