#include<stdio.h>
#define SIZE 50

int testPalindromes(char arr[], int index, int initial);

int main(void) {

  char arr[SIZE];
  char arr_temp[SIZE];
  int result;
  int index = 0;
  int initial = 0;
  int i;

  printf("Enter a sentence:\n");
  scanf("%[^\n]s", arr);


  for (i = 0; arr[i] != '\0'; i++) {
    arr_temp[i] = arr[i];
  }

  result = testPalindromes(arr_temp, index, initial);

  if (result == 1) {
    printf("\"%s\" is a palindrome", arr );
  } else
  {
    printf("\"%s\" is not a palindrome", arr );
  }
}

int testPalindromes(char arr[], int index, int initial) {

  int i;
  int j;
  int len = 0;

  if (initial == 0) {
    for (i = 0; arr[i] != '\0'; i++) {
      if (arr[i] < 65 || arr[i] > 122) {
        for (j = i; arr[j] != '\0'; j++) {
          arr[j] = arr[j+1];
          if (arr[j+1] == '\0') { // for solving the problem where the sentence has more than one space.
            i--;
          }
        }
      }
    }
    initial++;
  }

  for (i = 0; arr[i] != '\0'; i++) {
    len++;
  }

  if (index == len/2) {
    return 1;
  } else
  {
    if (arr[index] == arr[len - index - 1]) {
      index ++;
      return testPalindromes(arr, index, initial);
    } else
    {
      return 0;
    }
  }
}
