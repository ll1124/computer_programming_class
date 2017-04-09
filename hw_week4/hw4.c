#include<stdio.h>
#include<math.h>

int reverse(int x);

int main(void) {

  int input;

  printf("Enter a number between 1 and 9999: ");
  scanf("%d", &input);

  printf("The number with its reversed is: %d", reverse(input));
}

int reverse(int x) {
  int result;
  int count;

  count = log10(x);

  for (size_t i = 0; i <= count; i++) {
    int cal;
    if (i < count) {
      cal = x / (int)(pow(10, count -i));
      x -= cal * pow(10, count - i);
      result += cal * pow(10, i);
    } else {
      cal = x;
      result += cal * pow(10, i);
    }
  }
  return result;
}
