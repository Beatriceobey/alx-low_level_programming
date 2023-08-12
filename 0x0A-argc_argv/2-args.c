#include <stdio.h>
#include "main.h"
/**
 *main - program that prints all arguments it receives
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[1]);
	}

	return (0);
}
