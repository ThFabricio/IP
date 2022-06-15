#include <stdio.h>

int main(void) {
  
  int p=0,c=0,p1=0,c1=0,esquerda=0,direita=0;

  scanf("%i %i %i %i", &p, &c, &p1, &c1);

  esquerda = p*c;
  direita = p1*c1;

  if(esquerda > direita){

    printf("-1\n");

  }

  else if(direita > esquerda){

    printf("1\n");
  }

  else if(direita == esquerda){

    printf("0\n");

  }

  return 0;
}