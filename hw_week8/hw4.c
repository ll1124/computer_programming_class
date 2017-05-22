#include<stdio.h>
#include<stdlib.h>

struct student {
  char name[80];
  int stdnum;
};

void sortNum(struct student *stu, int num);

int main(void) {

  int i, j, k, num = 5;
  char temp;
  char tempStr[30];
  struct student stu[num];

  for (i = 0; i < num; i++) {
    j = 0;
    k = 0;
    printf("(%d) Enter student name / student number: ", i+1 );

    while ((temp = getchar()) != '/') {
      stu[i].name[j] = temp;
      j++;
    }
    stu[i].name[j] = '\0';

    while((temp = getchar()) != '\n') {
      if (temp >= 48 && temp <= 57) {
        tempStr[k] = temp;
        k++;
      }
    }
    stu[i].stdnum = atoi(tempStr);
  }

  sortNum(stu, num);

  printf("\n%s\t\t%s\n", "ID", "Name");
  for (i = 0; i < num; i++) {
    printf("%d\t\t%s\n", stu[i].stdnum, stu[i].name );
  }
}

void sortNum(struct student *stu, int num) {

  int i, j;
  struct student temp;

  for (i = 0; i < num; i++) {
    for (j = 0; j < num - i - 1; j++) {
      if (stu[j].stdnum > stu[j+1].stdnum) {
        temp = stu[j];
        stu[j] = stu[j+1];
        stu[j+1] = temp;
      }
    }
  }
}
