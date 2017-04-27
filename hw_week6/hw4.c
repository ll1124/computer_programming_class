#include<stdio.h>

int add(int a, int b );
int sub(int a, int b );
int mul(int a, int b );

int main(void) {

  int (*func[3])(int, int) = {add, sub, mul};
  char operator[3] = {'+', '-', '*'};
  int operation;
  int a;
  int b;
  int result;

  do {
    printf("0.Addition\n");
    printf("1.Subtraction\n");
    printf("2.Multiplication\n");
    printf("3.End\n");
    printf("select the operation: ");
    scanf("%d", &operation);
    if (operation == 3) {
      printf("Exit");
      break;
    } else {
      printf("Enter the two numbers: ");
      scanf("%d %d", &a, &b );

      if (operation == 0) {
        result = (func)[0](a, b);
        printf("\n%d %c %d = %d\n\n", a, operator[0], b, result );
      } else if (operation == 1 ) {
        result = (func)[1](a, b);
        printf("\n%d %c %d = %d\n\n", a, operator[1], b, result );
      } else if (operation == 2) {
        result = (func)[2](a, b);
        printf("\n%d %c %d = %d\n\n", a, operator[2], b, result );
      }
    }
  } while(operation != 3);
  return 0;
}

int add(int a, int b) {
  return a + b;
}
int sub(int a, int b) {
  return a - b;
}
int mul(int a, int b) {
  return a * b;
}
