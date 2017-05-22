#include<stdio.h>
#include<math.h>

void displaybits(unsigned num);
unsigned reversebits(unsigned num);

int main(void) {

  unsigned number;
  unsigned reversenum;

  printf("Enter unsigned integer: " );
  scanf("%u", &number );

  printf("\nBefore bits are reversed: \n");
  displaybits(number);

  printf("\nAfter bits are reversed: \n" );
  reversenum = reversebits(number);
  displaybits(reversenum);
}

void displaybits(unsigned num) {

  unsigned c;
  unsigned displaymask = 1 << 15;

  printf("%10u = ", num );

  for (c = 1; c <= 16; c++) {
    putchar(num & displaymask ? '1' : '0');
    num <<= 1;

    if (c % 8 == 0) {
      putchar(' ');
    }
  }
}

unsigned reversebits(unsigned num) {

  unsigned c, temp, reversenum = 0, displaymask = 1 << 31;

  for (c = 1; c <= 16; c++) {
    temp = num;
    temp <<= 32 - c;
    if (temp & displaymask) {
      reversenum += pow(2, 15 - c + 1);
    }
  }
  return reversenum;
}
