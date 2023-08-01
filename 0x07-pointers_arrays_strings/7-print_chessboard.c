#include "main.h"
/**
 *print_chessboard - function prints chessboard
 *@a: array
 *Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col = 0;

	for (row < 8; row++)
	{
		for (col < 8; col++)
		{
			_putchar(a[row][col]);
			_putchar(' ');
		}

		_putchar('\n');
	}
}
