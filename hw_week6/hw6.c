#include<stdio.h>
#include<string.h>
#define SIZE 300

int correctTypo(char *str);

int main(void) {

  int result;
  char str[SIZE] = "I love programiing, but i am not goad at programiing. I will practice hard to do programiing well. I will be attending class hard to be goad at programiing. I will study hard and get goad score in midterm exem.";

  printf("Before spell check:\n%s\n", str );
  result = correctTypo(str);
  printf("After spell check:\n%s\n\n", str );
  printf("How many word hard in the string: %d", result );

  return 0;
}

int correctTypo(char *str){
  char *ptr = NULL;
  char tempStr[SIZE];
  int i;
  int num = 0;

  for (i = 0; str[i] != '\0'; i++) {
    tempStr[i] = str[i];
  }

 while ((ptr = strstr(str, "programiing"))) {
   ptr[7] = 'm';
 }

 while ((ptr = strstr(str, "goad"))) {
   ptr[2] = 'o';
 }

 while ((ptr = strstr(str, "exem"))) {
   ptr[2] = 'a';
 }

 while ((ptr = strstr(tempStr, "hard"))) {
   ptr[1] = 's';
   num++;
 }


  return num;
}
