#include<stdio.h>

int tower(int x, int a, int c, int b);

int main(void) {
  int num;
  int stack1 = 1;
  int stack2 = 2;
  int stack3 = 3;

  printf("Enter the starting number of disks: ");
  scanf("%d",&num );
  tower(num, stack1, stack3, stack2);

  return 0;
}

int tower(int x, int a, int c, int b) {

  if (x == 1) {
    printf("%d -> %d\n", a, c);
  } else {
    tower(x - 1, a, b, c);
    tower(1, a, c, b);
    tower(x - 1, b, c, a);
  }
  return 0;
}
