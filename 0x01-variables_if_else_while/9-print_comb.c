#include <stdio>
/**
 *main - Entry point
 *description: Print all combination of single digits numbers
 *
 *Return: Always (0)
 */
int main(void)
{
	int j, i;

	for (j = 48; j <= 56; j++)
	{
		for (i = 49; i <= 57; i++)
		{
			if (i > j)
			{
				putchar(i);
				putchar(j);
				if (j != 56 || m != 57)

				{
					putchar(',');
					putchar('');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
