#include<stdio.h>

int main(void){

  int num = 0;
  int first;
  int second;
  int third;
  int fourth;

  printf("Decimal\t\tBinary\n");
  while (num < 16) {

    int num_cal = num;

    for (size_t i = 0; i < 4; i++) {

      if (i == 0) {
        first = (num_cal % 2 == 0) ? 0 : 1;
      } else if (i == 1) {
        second = (num_cal % 2 == 0) ? 0 : 1;
      } else if (i == 2) {
        third = (num_cal % 2 == 0) ? 0 : 1;
      } else if (i == 3) {
        fourth = (num_cal % 2 == 0) ? 0 : 1;
      }
      num_cal /= 2;
    }
    printf("%d\t\t%d%d%d%d\n",num, fourth, third, second, first);
    num ++;
  }

  return 0;
}
