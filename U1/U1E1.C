#include <stdio.h>

int main(void) {
  printf("U1E1\n");
  int a, Salary;
  float d, h;
  printf("Enter the salary ! \n");
  scanf("%d", &a);
  d = a * (0.4);
  h = a * (0.2);
  Salary = a + d + h;
  printf("Salary %d", Salary);
  return 0;
}