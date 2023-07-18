#include <stdio.h>
/**
*main - Use putchar function only (thrice)
*description: print lower and upper case letters and new line
*
*Return: 0
*/
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
	putchar(lowercase);
}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
	putchar(uppercase);
}
	putchar('\n');
	return (0);
}
