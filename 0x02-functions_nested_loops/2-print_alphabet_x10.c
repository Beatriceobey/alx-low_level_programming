#include "main.h"
/**
 *print_alphabet_x10 - A function that prints the 10 times lowercase alphabets
 *Return: 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (a < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
