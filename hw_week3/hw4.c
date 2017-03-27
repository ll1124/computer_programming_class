#include<stdio.h>

int main(void){

  int count = 1, num = 17;
  int count_divided_2;

  while (count < 14) {

    count_divided_2 = (num - count)/2;

    for (size_t i = 0; i < count_divided_2; i++) {
      printf(" ");
    }

    for (size_t i = 0; i < count; i++) {
      if (i%2 == 0) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
    count += 4;
  }

  while (count > 0) {

    count_divided_2 = (num - count)/2;

    for (size_t i = 0; i < count_divided_2; i++) {
      printf(" ");
    }

    for (size_t i = 0; i < count; i++) {
      if (i%2 == 0) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
    count -= 4;
  }
  return 0;
}
