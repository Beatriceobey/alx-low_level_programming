#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string
 * Return: reversed string
 */
void rev_string(char *s)
{
	char reverse - s[0];
	int countter = 0;
	int a;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (a = 0; a < counter; a++)
	{
		counter--;
		reverse = s[a];
		s[a] = s[counter];
		s[counter] = reverse;
	}
}
