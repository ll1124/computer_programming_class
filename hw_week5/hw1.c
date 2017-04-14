#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20  

void randomNumArray(int arr[]);
void printRandomNumArray(int arr[]);

int main(void) {

  int arr[SIZE];

  srand(time(NULL));

  printf("Nonrepetitive array values are:\n");

  randomNumArray(arr);
  printRandomNumArray(arr);
  return 0;
}

void randomNumArray(int arr[]) {

  int i;
  int j;
  int temp;

  for (i = 0; i < SIZE; i++) {
    temp = (rand() % SIZE + 1);
    for (j = 0; j < i; j++) {
      if (arr[j] == temp) {
        break;
      }
    }
    if (j < i) {
      i--;
    }
    else {
      arr[i] = temp;
    }
  }
}


void printRandomNumArray(int arr[]) {

  int i;

  for (i = 0; i < SIZE; i++) {
    printf("Array[%d] = %d\n", i, arr[i] );
  }
}
