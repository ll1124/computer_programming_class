#include<stdio.h>

int main(void){

  int num;
  int one;
  int two;
  int three;
  int four;
  int five;

  printf("Enter a five-digit number:");
  scanf("%d", &num );

  five = num / 10000;
  num = num - num / 10000 * 10000;
  four = num / 1000;
  num = num - num / 1000 * 1000;
  three = num / 100;
  num = num - num / 100 * 100;
  two = num / 10;
  num = num - num / 10 * 10;
  one = num;

  printf("%d   %d   %d   %d   %d\n", one, two, three, four, five);
  printf("The sum of the digits : %d", one + two + three + four + five);
  return 0;
}
