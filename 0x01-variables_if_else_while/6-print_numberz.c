#include <stdio.h>
/**
 *main - Entry point
 *description: Print single digits of base 10 without char
 *
 *Return: Always (0)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
