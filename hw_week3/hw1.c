#include<stdio.h>

int main(void) {

  int counter = 0;
  int num;
  int largest;

  do {
    printf("Enter the number: ");
    scanf("%d", &num );
    if (counter == 0) {
      largest = num;
    }
    if (num > largest) {
      largest = num;
    }
    counter += 1;
  } while(counter <= 4);

  printf("Largest is %d", largest );
  return 0;
}
