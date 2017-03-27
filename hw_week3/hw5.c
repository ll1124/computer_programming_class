#include<stdio.h>

int main(void){

  int product_num;
  int selling_num;
  float result = 0;

  printf("Enter pairs of item numbers and quantities.\n");
  printf("Enter -1 for the item number in end input.\n");


  while (1){

    scanf("%d", &product_num);
    if (product_num == EOF) {
      break;
    }
    scanf("%d", &selling_num);

    if (product_num > 5) {
      printf("Invaild product code:\t%d\n", product_num );
      printf("\t    Quantity:\t%d\n", selling_num);
    }
    switch (product_num) {
      case 1:
      result += 2.98 * selling_num;
      break;

      case 2:
      result += 4.50 * selling_num;
      break;

      case 3:
      result += 9.98 * selling_num;
      break;

      case 4:
      result += 4.49 * selling_num;
      break;

      case 5:
      result += 6.87 * selling_num;
      break;
    }
  }
  printf("The total retail value was:    %.2f", result);
  return 0;
}
