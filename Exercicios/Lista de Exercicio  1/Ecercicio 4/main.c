#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2, num3;

   printf("Digite um numero: ");
   scanf("%i", &num1);
   printf("Digite outro numero: ");
   scanf("%i", &num2);
   printf("Digite outro numero: ");
   scanf("%i", &num3);


   if (num1<=num2 && (num1>= num3 || num1 <= num3) ){

    printf("o numero do meio eh: %i", num1);

   }else if (num2 <= num1 &&(num2>= num3 || num2 <= num3)){

    printf("o numero do meio eh: %i", num2);
   }else if (num3 <= num1 && (num3>= num2 || num3 <= num2)){

    printf("o numero do meio eh: %i", num3);
   }





    return 0;
}
