#include "main.h"
/**
 *print_rev - prints string in reverse
 *@s: string
 *Return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for  (length = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
