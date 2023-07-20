#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - Entry point
 *description: Print single digits of base 10 (0 - 9)
 *
 *Return: Always (0)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
