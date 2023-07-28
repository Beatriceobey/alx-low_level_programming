#include "main.h"
/**
 *swap_int - swaps thevalue of the integers
 *@a: integer to swap
 *@b: integer to swap
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int num1 = *a;

	*a = *b;
	*b = num1;
}
