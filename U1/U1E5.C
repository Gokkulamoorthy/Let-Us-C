#include <stdio.h>

int main(void) {
  printf("U1E5\n");
  int l,b,p;
  float c,r;
  printf("Enter the Length & breath !\n");
  scanf("%d",&l);
  scanf("%d",&b);
  printf("Enter the radius !\n");
  scanf("%f",&r);
  p = (l+b)*2;
  c = 2*3.14159*r;
  printf("Rectangle %d,circle %0.2f",p,c);
  return 0;
}