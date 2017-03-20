#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  int result;

  printf("Input two integers :");
  scanf("%d%d", &num1, &num2 );

  if (num1 >= num2) {
    if (num1 % num2 == 0) {
      result = num1 / num2;
      printf("%d is a multiple of %d by a factor of %d ", num1, num2, result);
    }
    else { printf("%d is not a multiple of %d", num1, num2 ); }

  }
  else {
    printf("%d is not a multiple of %d", num1, num2 );
  }
}
