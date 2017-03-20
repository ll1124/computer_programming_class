#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int sum;
	int product;
	int difference;
	int quotient;
	int remainder;

	printf("Enter two numbers:");
	scanf("%d%d", &num1, &num2);

	sum = num1 + num2;
	product = num1 * num2;
	difference = num1 - num2;
	quotient = num1 / num2;
	remainder = num1 % num2;

	printf("The sum is %d\n", sum);
	printf("The product is %d\n", product);
	printf("The difference is %d\n", difference);
	printf("The quotient is %d\n", quotient);
	printf("The remainder is %d\n", remainder);

	return 0;
}
