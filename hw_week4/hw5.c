#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip();

int main() {
 int i = 1;
 int tails;
 srand(time(NULL));

 while (i <= 100) {
  if (flip() == 0) {
    printf("Tails ");
    tails += 1;
  } else {
    printf("Heads ");
  }
  if (i % 10 == 0) {
    printf("\n");
  }
  i += 1;
}
  printf("\nThe total number of Heads was %d\n", 100 - tails);
  printf("The total number of Tails was %d", tails);
}

int flip() {
  return rand() % 2;
}
