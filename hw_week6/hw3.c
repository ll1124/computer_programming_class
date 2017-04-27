#include <stdio.h>
#define SIZE 80

void concatenateString(char *string1, char *string2);

int main(void) {

  char string1[SIZE];
  char string2[SIZE];

  printf("Enter two strings: ");
  scanf("%s%s", string1, string2 );
  concatenateString(string1, string2);

  printf("%s",string1 );
}

void concatenateString(char *string1, char *string2) {

  while ((*string1) != '\0'){
    string1++;
  }
  while (((*string1++) = (*string2++)));
}
