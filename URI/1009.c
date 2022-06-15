#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100];
    double salario_fixo = 0, vendas_feitas = 0, salario_total = 0;

    scanf("%s", &nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &vendas_feitas);

    salario_total = salario_fixo + (0.15 * vendas_feitas);

    printf("TOTAL = R$ %.2lf\n", salario_total);

    return 0;
}