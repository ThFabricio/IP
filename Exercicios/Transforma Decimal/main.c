#include <stdio.h>

void main (){

 double n1;
 double n2;

 printf("Digite um numero: ");
 scanf("%d", &n1);
 printf("Digite um segundo numero: ");
 scanf("%d", &n2);

 double n3= n1+n2;
 double n4= pow (n1, n2);
 double n5= pow (n1, n1);
 double n6= n5+n4;
 double n7= sqrt (n6);
 double n8= n1-n2;
 double n9= sin (n8);
 double n10;

 if (n1>0){

    double n10= n1*1;

 }

 if (n1<0){

    double n10= n1*(-1);
 }

 printf("A soma dos numeros eh: %f; O produto do primeiro numero pelo quadrado do segundo eh: %f; O quadrado do primeiro numero eh:: %f; A raiz quadrada da soma dos quadrados eh: %f; seno da diferença do primeiro numero pelo segundo eh: %f, O modulo do primeiro numero eh: %f", n3, n4, n5, n6, n7, n8, n9, n10 );

 return 0;

}
