#include<stdio.h>

int perfect(int x);

int main(void) {
  int num;

  printf("For the integers from 1 to 1000: ");
  scanf("%d", &num);

  if (perfect(num) == num) {
    printf("%d is perfect", num);
  }
  return 0;
}

int perfect(int x) {
  int cal;

  for (size_t i = 1; i < x; i++) {
    if (x % i == 0) {
      cal += i;
    }
  }
  return cal;
}
