#include "main.h"
/**
 *_memset - fills the first n bytes of memory area pointed by s with constant b
 *@n: int
 *@s: pointer
 *@b: constant byte
 *Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
