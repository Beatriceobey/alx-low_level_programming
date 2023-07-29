#include "main.h"
/**
 *print_last_digit - Write a function that prints the last digit of a number
 *@lowercase: int to check
 *Return: 0
 */
int print_last_digit(int lowercase)
{
	int lowercase;

	lowercase = n % 10;
	if (lowercase < 0)
	{
		_putchar(-lowercase + 48);
		return (-lowercase);
	}
	else
	{
		_putchar(lowercase + 48);
		return (lowercase);
	}
}
