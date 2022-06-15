#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, nota3, nota4, media;

    printf("Digite a nota da primeira prova do aluno: ");
    scanf("%lf", &nota1);
    printf("Digite a nota da segunda prova do aluno: ");
    scanf("%lf", &nota2);
    printf("Digite a nota da teceira prova do aluno: ");
    scanf("%lf", &nota3);
    printf("Digite a nota da quarta prova do aluno: ");
    scanf("%lf", &nota4);
    media= ((nota1*1)+(nota2*2)+(nota3*3)+(nota4*4))/(1+2+3+4);
    printf("A media do aluno eh: %.2lf", media);


    return 0;
}
