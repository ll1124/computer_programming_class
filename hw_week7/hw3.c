#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

  char str[240], *strPtn;
  char *token;
  int word[25] = {0};
  int num;
  int i;

  for (i = 0; i < 25; i++) {
    word[i] = 0;
  }

  strPtn = str;

  printf("Enter three lines of text:\n");

  for (i = 0; i < 3; i++) { // text inputs
    fgets(strPtn, 80, stdin);
    while (strPtn[0] != '\0') {
      strPtn++;
    }
    strPtn--;
    strPtn[0] = ' ';
    strPtn++;
  }

  for (i = 0; str[i] != '\0'; i++) {
    if (ispunct(str[i])) {
      str[i] = ' ';
    }
  }

  token = strtok(str, " ");

  while (token != NULL) {
    num = strlen(token);
    word[num - 1]++;
    token = strtok(NULL, " " );
  }

  printf("\n" );

  for (i = 0; i < 25; i++) {
    if (word[i] > 0) {
      printf("%d words of length %d\n", word[i], i+1 );
    }
  }
}
