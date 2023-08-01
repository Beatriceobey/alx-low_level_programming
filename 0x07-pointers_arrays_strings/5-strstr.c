#include "main.h"
/**
 *_strstr - function finds the first occurrence of the substring
 *@haystack: input
 *@needle: input
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *t = needle;

		while (*i == *t && *t != '\0')
		{
			i++;
			t++;
		}

		if (*t == '\0')
			return (haystack);
	}

	return (0);
}
