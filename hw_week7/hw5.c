#include<stdio.h>
#include<string.h>

int main(void) {

  int i, len, num = 5;
  char str[num][20];
  char *strPtn;

  for (i = 0; i < num; i++) {
    printf("Enter a string: " );
    scanf("%s", &str[i][0] );
  }

  printf("\nThe strings starting with 'b' and ending with 'ed' are: \n" );

  for (i = 0; i < num; i++) {
    if (str[i][0] == 'b') {
      len = strlen(str[i]);
      strPtn = &str[i][len - 2];
      if ((strcmp(strPtn, "ed")) == 0) {
        printf("%s\n", str[i] );
      }
    }
  }
}
