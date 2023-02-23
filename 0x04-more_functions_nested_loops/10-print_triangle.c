#include "main.h"
/**
* print_triangle - prints a triangle
* @size: takes in a integer for size of triangle
*/
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
			_putchar(' ');
		for (k = i + j; k >= 1; k--)
			_putchar('#');
		_putchar('\n');
	}
}
