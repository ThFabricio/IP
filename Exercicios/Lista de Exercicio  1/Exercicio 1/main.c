#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, num3;
    char cond, oper;

    while (cond != 'f'){

        printf("Digite um numero para operacao: ");
        scanf("%lf", &num1);
        printf("Escolha o tipo de operacoes vc quer fazer com os numeros entre +, -, * e /:");
        scanf(" %c", &oper);
        printf("Digite outro numero para operacao: ");
        scanf("%lf", &num2);

        if (oper == '/'){

            num3 = num1/num2;
            printf("O resultado da operacao %c, dos valores %.2lf e %.2lf eh: %.2lf\n", oper, num1, num2, num3);

        }
        if (oper == '*'){

            num3 = num1*num2;
            printf("O resultado da operacao %c, dos valores %.2lf e %.2lf eh: %.2lf\n", oper, num1, num2, num3);

        }
        if (oper == '-'){

            num3 = num1-num2;
            printf("O resultado da operacao %c, dos valores %.2lf e %.2lf eh: %.2lf\n", oper, num1, num2, num3);

        }
        if (oper == '+'){

            num3 = num1+num2;
            printf("O resultado da operacao %c, dos valores %.2lf e %.2lf eh: %.2lf\n", oper, num1, num2, num3);

        }

        printf("Deseja fazer outra operacao ? digite f caso nao queria realizar outra operacao ");
        scanf(" %c", &cond);

    }

    return 0;
}
