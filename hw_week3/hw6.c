#include<stdio.h>

int main(void){

  char grade;
  int num_a = 0, num_b = 0, num_c = 0, num_d = 0, num_f = 0;
  float average = 0;
  char result;

  printf("Enter the letter grades.\n");
  printf("Enter the EOF character to end input.\n");

  do {
    grade = getchar();

    switch (grade) {
      case 'A':
      case 'a':
      num_a += 1;
      break;

      case 'B':
      case 'b':
      num_b += 1;
      break;

      case 'C':
      case 'c':
      num_c += 1;
      break;

      case 'D':
      case 'd':
      num_d += 1;
      break;

      case 'F':
      case 'f':
      num_f += 1;
      break;
    }
  } while(grade != EOF);

  average = (float) (num_a * 4 + num_b * 3 + num_c * 2 + num_d * 1)/(num_a + num_b + num_c + num_d + num_f);
  printf("\n\nThe totals for each letter grade are:\n");
  printf("A: %d\n",num_a);
  printf("B: %d\n",num_b);
  printf("C: %d\n",num_c);
  printf("D: %d\n",num_d);
  printf("F: %d\n",num_f);
  printf("Average grade is %s", (average >= 3.5) ? "A" : (average >= 2.5) ? "B" : (average >= 1.5) ? "C" : (average >= 0.5) ? "D" : "F");
  return 0;
}
