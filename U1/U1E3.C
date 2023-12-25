#include <stdio.h>

int main(void) {
  printf("U1E3\n");
  int t,e,m,s,ss,total,per;
  printf("Enter the marks\n");
  scanf("\n %d",&t);
  scanf("\n %d",&e);
  scanf("\n %d",&m);
  scanf("\n %d",&s);
  scanf("\n %d",&ss);
  total = t+e+m+s+ss;
  per = (t+e+m+s+ss)/5;
  printf("Total %d , percentage %d",total,per);
  return 0;
}