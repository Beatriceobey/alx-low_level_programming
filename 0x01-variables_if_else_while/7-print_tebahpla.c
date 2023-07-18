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

	for (lowercase <= 'a'; lowercase = 'z'; lowercase++)
{
	putchar(lowercase);
}
	putchar('\n');
	return (0);
}
