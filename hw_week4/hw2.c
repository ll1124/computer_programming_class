#include<stdio.h>

int perfect(int x);

int main(void) {
  int count = 1000;
  printf("For the integers from 1 to 1000:\n");

  for (size_t i = 1; i < count; i++) {
    perfect(i);
  }
  return 0;
}

int perfect(int x) {
  int cal = 0;

  for (size_t i = 1; i < x; i++) {
    if (x % i == 0) {
      cal += i;
    }
  }
  if (cal == x) {
    printf("%d is perfect\n", x);
  }
  return 0;
}
