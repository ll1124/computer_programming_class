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
    printf("%d ", arr[i] );
  }
  printf("\n");
  inverseOrder(arr, size);
  return 0;
}


void inverseOrder(int *arr, int size) {

  if (size-1) {
    size--;
    inverseOrder(&arr[1], size);
  }
  printf("%d ", *arr );
}
