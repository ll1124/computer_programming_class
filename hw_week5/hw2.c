#include<stdio.h>
#define SIZE 15

int binarySearch(const int b[], int searchKey, int low, int high);
void printHeader(void);
void printRow(const int b[], int low, int mid, int high);

int main(void){

  int a[SIZE];
  int searchKey;
  int result;
  int i;

  for (i = 0; i < SIZE; i++) {
    a[i] = i * 2;
  }

  printf("Enter a number between 0 and 28:");
  scanf("%d", &searchKey );

  printHeader();
  result = binarySearch(a, searchKey, 0, SIZE - 1 );

  if (result == -1) {
    printf("%d not found", searchKey );
  } else {
    printf("%d found in array element %d", searchKey, result );
  }
  return 0;
}


int binarySearch(const int b[], int searchKey, int low, int high) {

  int middle = (high + low)/2;

  if (searchKey == b[middle]) {
    printRow(b, low, middle, high);
    printf("\n");
    return middle;
  }
  else {
    printRow(b, low, middle, high);
    if (low >= high) {
      return -1;
    }
    else {
      if (searchKey < b[middle]) {
        high = middle -1;
        return binarySearch(b, searchKey, low, high);
      }
      else {
        low = middle + 1;
        return binarySearch(b, searchKey, low, high);
      }
    }
  }
}

void printHeader(void) {

  int i;

  printf("Subscripts:\n");
  for (i = 0; i < SIZE; i++) {
    printf("%4d ", i );
  }
  printf("\n");
  for (i = 0; i < SIZE; i++) {
    printf("-----");
  }
  printf("\n");
}

void printRow(const int b[], int low, int mid, int high) {

  int i;

  for (i = 0; i < SIZE; i++) {
    if (i < low) {
      printf("     ");
    } else if (i >= low && i <= high && i != mid) {
      printf("%4d ", b[i] );
    } else if (i == mid) {
      printf("%4d*",b[i] );
    }
  }
  printf("\n");
}
