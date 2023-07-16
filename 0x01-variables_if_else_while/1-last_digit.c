#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - A program to print the last digit of n
*
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of n is lastDigit%d, and is greater than 5\n");
	else if (lastDigit == 0)
		printf("Last digit of n is lastDigit%d and is 0\n");
	else
		printf("Last digit of n is lastDigit%d and is less than 6 and not 0\n");
	return (0);
}
