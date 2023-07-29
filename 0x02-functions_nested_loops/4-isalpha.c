#include "main.h"
/**
 *_isalpha - Write a function that checks for alphabetic character
 *@c: char
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
