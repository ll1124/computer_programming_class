#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int i;
  char str[10];
  int total = 0;

  for (i = 0; i < 4; i++) {
    printf("Enter an integer string: " );
    scanf("%s", str);
    total += atoi(str);
  }
  printf("\nThe total of values is %d\n", total );
}
