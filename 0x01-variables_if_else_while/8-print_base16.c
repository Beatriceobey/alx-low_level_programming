#include <stdio.h>
/**
 *main - Entry point
 *description: Print single digits of base 16 without char
 *
 *Return: Always (0)
 */
int main(void)
{
	char currentChar;
        int i;

        for (i = 0; i < 10; i++)
        {
                currentChar = i + "0";
		putchar(currentChar);
        }
	for (i = 0; i < 6; i++)
	{
		currentChar = i + 'a';
		putchar(currentChar);
	}

        putchar('\n');
        return (0);
}
