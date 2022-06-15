#include <stdio.h>
 
int main() {
 
  int funcionarionumb, horasdetrabalho;
  float valorporhora, salario;
  scanf("%i", &funcionarionumb);
  scanf("%i", &horasdetrabalho);
  scanf("%f", &valorporhora);
  salario= valorporhora*horasdetrabalho;
  printf("NUMBER = %i\n", funcionarionumb);
  printf("SALARY = U$ %.2f\n", salario);

    return 0;
}