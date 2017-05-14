#include <stdio.h>
#include <string.h>

int main() {

  int i, j, num = 10;
  char str[num][100];
  char temp[100];

  for (i = 0; i < num; i++) {
    printf("Enter a string: " );
    scanf("%s", &str[i][0] );
  }

  for (i = 0; i < num; i++) {
    for (j = i; j < num - 1; j++) {
      if ((strcmp(str[j], str[j+1])) > 0) {
        strcpy(temp, str[j]);
        strcpy(str[j], str[j+1]);
        strcpy(str[j+1], temp);
      }
    }
  }

  printf("The strings in sorted order are:\n" );

  for (i = 0; i < num; i++) {
    printf("%s\n", str[i]);
  }
}
