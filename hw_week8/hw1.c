#include<stdio.h>

int calbits(unsigned n);

int main(void) {

  unsigned n;
  int total;

  printf("Enter an integer: " );
  scanf("%u", &n );

  total = calbits(n);

  if (total % 2) {
    printf("The total number of 1s in the bit representation is odd\n" );
  } else {
    printf("The total number of 1s in the bit representation is even\n" );
  }
}

int calbits(unsigned n) {

  unsigned c;
  unsigned calmask = 1 << 31;
  int total = 0;

  for (c = 1; c <= 32; c++) {
    if (n & calmask) {
      total++;
    }
    n <<= 1;
  }
  return total;
}
