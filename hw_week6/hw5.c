#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void inverseOrder(int *arr, int size);

int main(void) {

  int size = 10;
  int arr[size];
  int i;

  srand(time(NULL));

  for (i = 0; i < size; i++) {
    arr[i] = rand() % 100 + 1;
    printf("%d ", *(arr+i));
  }
  printf("\n");

  for (i = 0; i < size; i++) {
    printf("%d ", *(arr+size-i-1));
  }
  return 0;
}
