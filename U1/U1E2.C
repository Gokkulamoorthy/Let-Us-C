#include <stdio.h>

int main(void) {
  printf("U1E2\n");
  int km,meter,cm;
  float feet,inches;
  printf("Enter the KM ! \n");
  scanf("%d",&km);
  meter = km*1000;
  printf("\nMeter %d\n",meter);
  feet = km*3280.84;
  printf("\nfeet %f\n",feet);
  inches = km*39370.1;
  printf("\nInches %f\n",inches);
  cm = km*100000;
  printf("\ncm %d\n",cm);
  return 0;
}