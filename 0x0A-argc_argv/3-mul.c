#include <stdio.h>
#include "main.h"
/**
 *main - program that multiplies two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: Always 0
 */
int _atoi(char *s)
{
	int a, b, j, length, k, digit;

	a = 0;
	b = 0;
	j = 0;
	length = 0;
	k = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (a < length && k == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (d % 2)
				digit = -digit;
			j = j * 10 + digit;
			k = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			k = 0;
		}
		a++;
	}

	if (k == 0)
		return (0);

	return (j);
}

/**main - multiplies two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
