#include<stdio.h>

void displaybits(unsigned number);
unsigned calbits(unsigned number, unsigned power);

int main(void) {

  unsigned number, power, result;

  printf("Enter two integers: " );
  scanf("%u%u", &number, &power );

  printf("number: \n");
  printf("%7u = ", number );
  displaybits(number);

  printf("\n\npow: \n");
  printf("%7u = ", power );
  displaybits(power);

  result = calbits(number, power);

  printf("\n\n%u * 2^%u = \n", number, power );
  printf("%7u = ", result );
  displaybits(result);
}

void displaybits(unsigned number) {

  unsigned c;
  unsigned displaymask = 1 << 15;

  for (c = 1; c <= 16; c++) {
    putchar(number & displaymask ? '1' : '0');
    number <<= 1;

    if (c % 8 == 0) {
      putchar(' ');
    }
  }
}

unsigned calbits(unsigned number, unsigned power) {

  number <<= power;
  return number;
}
