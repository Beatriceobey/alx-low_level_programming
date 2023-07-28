#include "main.h"
/**
 *puts2 - function prints every other character starting with the first
 *@str: string
 *Return: 0
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *m = str;
	int n;

	while (*m != '\0')
	{
		m++;
		i++;
	}
	j = i - 1;
	for (n = 0 ; n <= j ; n++)
	{
		if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
