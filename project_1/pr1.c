#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int printHeader();
int diceRollingGame(long cash);

int main(void) {

  int input;
  long cash = 100000;
  int wins = 0;
  int loses = 0;

  input = printHeader();

  if (input == 1) {
    printf("Current Cash: %ld\n", cash );
    printf("Wins: %d\n", wins );
    printf("Loses: %d\n", loses );

  } else if (input == 2) {

  } else if (input == 3) {
    return 0;
  }
  return 0;
}

int printHeader() {

  int input;

  printf("1.My State\n");
  printf("2.Dice Rolling Game\n");
  printf("3.End\n\n");

  do {
    printf("Enter your choice : ");
    scanf("%d", &input );
  } while(input != 1 && input != 2 && input != 3);

  return input;
}

int diceRollingGame(long cash) {

  long bet;

  printf("Current cash : %ld\n", cash );

  printf("Input you betting : \n");
  scanf("%ld", &bet );


}
