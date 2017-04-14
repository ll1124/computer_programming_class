#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int main(void) {

  int i;
  int j;
  int arr[SIZE];
  int temp;

  srand(time(NULL));

  printf("Nonrepetitive array values are:\n");

  for (i = 0; i < SIZE; i++) {
    if (i == 0) {
      arr[i] = rand() % 20 + 1;
    } else{
      temp = (rand() % 20 + 1);
      for (j = 0; j < i; j++) {
        if (arr[j] == temp) {
          i--;
          break;
        }
        arr[i] = temp;
      }
    }
  }
  for (i = 0; i < SIZE; i++) {
    printf("Array[%d] = %d\n", i, arr[i]);
  }
return 0;
}
