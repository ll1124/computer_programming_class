#include<stdio.h>
#include<string.h>

struct student {
  char sn[20];
  char name[10];
  char es[10];
  char ks[10];
};

char printHeader();

int main(void) {

  struct student stu[100], temp;
  int num = 0, i;
  char tempStr[20], input;

  printf("%s\n\n", "Score management" );

  printf("%s\n%s\n", "Enter student number, english score, korean score respectively", "When you enter student number 0, end input" );

  scanf("%s", temp.sn );
  while ((strcmp(temp.sn, "0")) != 0) {
    scanf("%s%s%s", temp.name, temp.es, temp.ks );
    stu[num] = temp;
    num++;
    scanf("%s", temp.sn );
  }

  do {
    input = printHeader();

    if (input == 49) { // student admission year search
      printf("%s\n", "Enter the admission year." );
      scanf("%s", tempStr );
      for (i = 0; i < num; i++) {
        if ((strncmp(tempStr, stu[i].sn, 4)) == 0) {
          printf("%s %s %s %s\n\n", stu[i].sn, stu[i].name, stu[i].es, stu[i].ks );
        }
      }
    } else if (input == 50 ) {
      printf("%s\n", "Enter the student name." );
      scanf("%s", tempStr );
      for (i = 0; i < num; i++) {
        if ((strcmp(tempStr, stu[i].name)) == 0) {
          printf("%s %s %s %s\n\n", stu[i].sn, stu[i].name, stu[i].es, stu[i].ks );
        }
      }
    } else if (input == 51) {
      break;
    }
  } while(1);
}

char printHeader() {

	char input;

  input = getchar();// user input
	do { // print main menu
    printf("\nChoose a search ways\n");
		printf("1. Student admission year\n");
		printf("2. Student name\n");
		printf("3. Exit\n");
    input = getchar();// user input
		while (getchar() != '\n');
	} while (input != 49 && input != 50 && input != 51); // print until input is 1,2 or 3
	return input;
}
