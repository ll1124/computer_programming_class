#include<stdio.h>
#define SIZE 50

int testPalindromes(char arr[], int index);

int main(void) {

  char arr[SIZE];
  char arr_temp[SIZE];
  int result;
  int i;
  int j;

  printf("Enter a sentence:\n");
  scanf("%[^\n]s", arr);


  for (i = 0; arr[i] != '\0'; i++) {
    arr_temp[i] = arr[i];
  }

  for (i = 0; arr_temp[i] != '\0'; i++) {
    if (arr_temp[i] < 65 || arr_temp[i] > 122) {
      for (j = i; arr_temp[j] != '\0'; j++) {
        arr_temp[j] = arr_temp[j+1];
        if (arr_temp[j+1] == '\0') { // for solving the problem where the sentence has more than one space.
          i--;
        }
      }
    }
  }

  result = testPalindromes(arr_temp, 0);

  if (result == 1) {
    printf("\"%s\" is a palindrome", arr );
  } else
  {
    printf("\"%s\" is not a palindrome", arr );
  }
}

int testPalindromes(char arr[], int index) {

  int i;
  int len = 0;

  for (i = 0; arr[i] != '\0'; i++) {
    len++;
  }

  if (index == len/2) {
    return 1;
  } else
  {
    if (arr[index] == arr[len - index - 1]) {
      index ++;
      return testPalindromes(arr, index);
    } else
    {
      return 0;
    }
  }
}
