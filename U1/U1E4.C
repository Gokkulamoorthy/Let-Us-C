#include <stdio.h>

int main(void) {
  printf("U1E4\n");
  int temp;
  float C;
  printf("Enter the Temperature !\n");
  scanf("%d",&temp);
  C = 0.55555555555*(temp-32);
  printf("Temperature %0.2f",C);
  return 0;
}