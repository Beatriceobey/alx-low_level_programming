#include <stdio.h>
/**
*main - Print alphabets using putchar
*description: Print lowercase backwards using putchar
*
*Return: 0
*/
int main(void)
{
	char lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
{
	putchar(lowercase);
}
	putchar('\n');
	return (0);
}
