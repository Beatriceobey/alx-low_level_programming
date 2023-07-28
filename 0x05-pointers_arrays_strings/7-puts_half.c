#include "main.h"
/**
 * puts_half - function that prints half of a string
 * description: if length is odd print n, n = (length_of_the_string - 1) / 2
 *@str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int length, n;

	length = 0;

	while (str[length] != '\0')
		length++;

	int n = (length - 1) / 2;

	for (int i = (length % 2 == 0 ? 0 : n + 1); i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
