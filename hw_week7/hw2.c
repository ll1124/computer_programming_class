#include <stdio.h>
#include <string.h>

int main() {

  char str[240];
  char *strPtn;
  int total[30];
  char i;

  strPtn = str;

  printf("Enter three lines of text:\n");
  for (i = 0; i < 3; i++) { // text inputs
    fgets(strPtn, 80, stdin);
    while (strPtn[0] != '\0') {
      strPtn++;
    }
  }

  printf("The total occurrences of each character : \n" );

  for (i = 65; i <= 90; i++) { // switch Upper to lower
    strPtn = str;
    strPtn = strchr(strPtn, i);
    while (strPtn != NULL) {
      strPtn[0] = (i + 32);
      strPtn++;
      strPtn = strchr(strPtn, i);
    }
  }

  for (i = 97; i <= 122; i++) { // count occurrences of each character
    total[i-97] = 0;
    strPtn = str;
    strPtn = strchr(strPtn, i);
    while (strPtn != NULL) {
      strPtn++;
      strPtn = strchr(strPtn, i);
      total[i-97]++;
    }
    printf("%c: %d\n", i, total[i-97] );
  }
}
