#include "main.h"
/**
 *main - print 1 - 100 followed by new line
 *description: print Fizz for multiples of three instead of the number, print Buzz for multiples of five and print FizzBuzz for multiples of both three and five
 *Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
