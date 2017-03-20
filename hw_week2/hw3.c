#include <stdio.h>

int main(void) {

  int num;
  int num_for_cal;
  int num_for_digit;
  int count = 10000;
  int result = 0;

  printf("Enter a 5-digit number : ");
  scanf("%d",&num);

  num_for_cal = num;

  while (count >= 1) {
    num_for_digit = num_for_cal;
    num_for_cal = num_for_cal / count;
    if (num_for_cal == 7) {
      result += 1;
    }
    num_for_cal = num_for_digit - num_for_cal * count;
    count /= 10;
  }
  printf("The number %d has %d seven(s) in it", num, result);
  return 0;
}
