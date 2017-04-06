#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip();

int main() {
 int i = 1;
 int heads;
 srand(time(NULL));

 while (i <= 100) {
  if (flip() == 0) {
    printf("Heads ");
    heads += 1;
  } else {
    printf("Tails ");
  }
  if (i % 10 == 0) {
    printf("\n");
  }
  i += 1;
}
  printf("The total number of Heads was %d\n", heads);
  printf("The total number of Tails was %d", 100 - heads);
}

int flip() {
  return rand() % 2;
}
