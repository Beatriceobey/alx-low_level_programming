#include "main.h"
/**
 *main - print_line
 *description: function that draws a straight line in the terminal
 *@n: number of times the character should be printed
 *Return: 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
