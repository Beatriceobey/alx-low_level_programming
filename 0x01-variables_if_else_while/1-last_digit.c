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
	int lastDgit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDgit = n % 10;

	if (lastDgit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDgit);
	else if (lastDgit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDgit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDgit);
	return (0);
}
