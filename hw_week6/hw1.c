#include <stdio.h>

int changeNumber(int *a, int *b, int *c);

int main(void) {

  int a, b, c;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  printf("Before: a = %d, b = %d, c = %d\n", a, b, c );
  changeNumber(&a, &b, &c);
  printf("After: a = %d, b = %d, c = %d", a, b, c );
}

int changeNumber(int *a, int *b, int *c) {

  int temp;

  (*a)++;
  (*b) = (*b)*(*c);
  temp = (*b);
  (*b) = (*c);
  (*c) = temp;

  return 0;
}
