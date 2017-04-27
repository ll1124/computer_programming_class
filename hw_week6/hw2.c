#include<stdio.h>
#define SIZE 80

int compareString(char *string1, char *string2);

int main(void) {

  char string1[SIZE];
  char string2[SIZE];
  int result;

  printf("Enter two strings: ");
  scanf("%s%s",string1, string2 );

  result = compareString(string1, string2);

  if (result == 1) {
    printf("%s and %s are equal.\n", string1, string2 );
  } else {
    printf("%s and %s are not equal\n", string1, string2 );
  }
  return 0;
}

int compareString(char *string1, char *string2) {

  while (*string1 != '\0' && *string2 != '\0') {
    if (*string1 == *string2) {
      string1++;
      string2++;
    }
    else {
      return 0;
    }
  }
  if (*string1 == '\0' && *string2 == '\0') {
    return 1;
  }
  else {
    return 0;
  }
}
