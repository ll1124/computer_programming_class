#include<stdio.h>

int ulcase (char x);

int main(void) {
  char str;

  printf("Enter the character: ");
  scanf("%c", &str);

  printf(ulcase(str) == 1 ? "%c: Uppercase" : "%c: Lowercase", str);
}

int ulcase (char x) {
  if (x >= 'A' && x<= 'Z') {
    return 1;
  } else {
    return 0;
  }
}
