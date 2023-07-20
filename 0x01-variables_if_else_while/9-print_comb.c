#include <stdio.h>
/**
 *main - Entry point
 *description: Print all combination of single digits numbers
 *
 *Return: Always (0)
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar('0' + i);
		if (i < 8)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
