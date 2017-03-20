#include <stdio.h>

int main(void){

  int num1;
  int num2;
  int result = 0;
  int start;
  int end;

  printf("Enter two integer :");
  scanf("%d%d",&num1, &num2 );

  if (num1 >= num2) {
    start = num2;
    end = num1;
  }
  else if (num1 < num2) {
    start = num1;
    end = num2;
  }

  while (start <= end) {
    result += start;
    start += 1;
  }
    printf("The sum of all integers between %d and %d in %d",num1, num2, result );
    return 0;
}
