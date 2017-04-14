#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 5
#define COLUMN 6

void sumMatrix(int arr1[][COLUMN], int arr2[][COLUMN], int result[][COLUMN]);
void printMatrix(int arr[][COLUMN]);

int main(void){

  int arr1[ROW][COLUMN];
  int arr2[ROW][COLUMN];
  int result[ROW][COLUMN];
  int i;
  int j;
  srand(time(NULL));

  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COLUMN; j++) {
      arr1[i][j] = rand() % 100 + 1;
      arr2[i][j] = rand() % 100 + 1;
    }
  }

  sumMatrix(arr1, arr2, result);

  printf("matrix1:\n");
  printMatrix(arr1);
  printf("\nmatrix2:\n");
  printMatrix(arr2);
  printf("\nresult:\n");
  printMatrix(result);
}

void sumMatrix(int arr1[][COLUMN], int arr2[][COLUMN], int result[][COLUMN]) {

  int i;
  int j;

  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COLUMN; j++) {
      result[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
}

void printMatrix(int arr[][COLUMN]) {

  int i;
  int j;

  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COLUMN; j++) {
      printf("%5d", arr[i][j]);
    }
    printf("\n");
  }
}
