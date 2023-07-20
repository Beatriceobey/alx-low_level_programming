#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * description: print lower case letters without q and e
 *
 * Return: Always (0)
 */
int main(void)
{
	int lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
		}
	}
	putchar('\n');
	return (0);
}
