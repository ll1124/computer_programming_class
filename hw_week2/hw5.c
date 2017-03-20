#include <stdio.h>

int main(void) {

  int user_input = 0;
  int sum;
  float average;
  int largest;
  int smallest;
  int count = 0;

  while (user_input != -1) {

      printf("Enter the number : ");
      scanf("%d", &user_input );
      if (user_input != -1) {

        count += 1;

        if (count == 1) {
          sum = user_input;
          average = user_input;
          largest = user_input;
          smallest = user_input;
        }

        else {
          sum += user_input;
          average = (float) sum / count;
          if (user_input > largest) {
            largest = user_input;
          }
          if (user_input < smallest) {
            smallest = user_input;
          }
        }
      }

  }

  printf("The number of user's input : %d\n", count);
  printf("The sum of input numbers : %d\n", sum);
  printf("The average of input numbers : %.2f\n", average);
  printf("The largest number is : %d\n", largest);
  printf("The smallest number is : %d\n", smallest);
  return 0;
}
