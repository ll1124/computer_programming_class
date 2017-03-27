#include<stdio.h>

int main(void){

  int base;
  int exponent;
  int result = 1;

  do {
    printf("Enter the base number: ");
    scanf("%d", &base);
  } while(base < 0);

  do {
    printf("Enter the exponent number: ");
    scanf("%d", &exponent);
  } while(exponent < 0);


  for (size_t i = 0; i < exponent; i++) {
    result *= base;
  }
  printf("%d^%d is %d", base, exponent, result);
  return 0;
}
