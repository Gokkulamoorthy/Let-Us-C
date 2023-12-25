#include <stdio.h>

int main(void) {
  printf("U1E6\n");
  int a = 1189 , b = 841,c;
  for(int i=1;i<9;i++){
    c=a/2;
    printf("A[%d], %d * %d \n",i,b,c);
    a=b;
    b=c;
  }
  return 0;
}