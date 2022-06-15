#include <stdio.h>

int main(void) {
  
  int c1=0,c2=0,c3=0,c4=0,c5=0;

  scanf("%i %i %i %i %i", &c1, &c2, &c3, &c4, &c5);

  if(c1>c2 && c2>c3 && c3>c4 && c4>c5){

    printf("D\n");
  }
  else if(c1<c2 && c2<c3 && c3<c4 && c4<c5){

    printf("C\n");
  }
  else{

    printf("N\n");
  }


  return 0;
}