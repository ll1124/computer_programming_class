#include <stdio.h>

int main(void)
{
	int integer;
	int remainder;

	printf("Input an integer : ");
	scanf("%d", &integer);
	remainder = integer % 2;

	if (remainder == 0) {
		printf("%d is an even number \n", integer);
	}

	if (remainder == 1) {
		printf("%d is an odd number \n", integer);
	}
	return 0;
}
