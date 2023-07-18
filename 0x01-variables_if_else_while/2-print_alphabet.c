#include <stdio.h>

/**
*main - Use putchar function only (twice)
*description: print lowercase alphbets using putchar
*
* Return: 0
*/
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
	putchar(lowercase);
}
	putchar('\n');
	return (0);
}
