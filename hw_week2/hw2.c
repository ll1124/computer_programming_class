#include <stdio.h>

int main(void){

  int num;
  int start;
  int result = 1;

  printf("Enter a positive integer: ");
  scanf("%d", &num );
  while (num <= 0) {
    printf("Enter a positive integer: ");
    scanf("%d", &num );
  }

  start = num;

  while (start > 1) {
    result *= start;
    start -= 1;
  }
  printf("%d! is %d", num, result);
  return 0;
}
