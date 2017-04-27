#include<stdio.h>

int fib(int n);

int main(void) {

  // int arr[] = {6, 9, 5, 1, 3, 8, 2, 0, 7, 4};
  // int n = 10;
  // int i, j;
  // for (i = 0; i < n-1; i++) {
  //   for (j = 0; j < n-i; j++) {
  //     if (arr[j] > arr[j+1]) {
  //       int hold = arr[j];
  //       arr[j] = arr[j+1];
  //       arr[j+1] = hold;
  //     }
  //   }
  // }
  // for (i = 0; i < n; i++) {
  //   printf("%d\n", arr[i] );
  // }
  int a;
  a = fib(7);
  printf("%d\n", a );
  return 0;
}

int fib(int n) {
  int a = 0, b = 1;
  int k;
  for (k = 0; k < n-1; k++) {
    int c = a + b;
    a = b;
    b = c;
  }
  return a;
}
