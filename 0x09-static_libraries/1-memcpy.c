#include "main.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *@n: copy this
 *@src: copy from
 *@dest: copy to
 *Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
		return (dest);
}
