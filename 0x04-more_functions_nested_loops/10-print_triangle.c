#include "main.h"
/**
 * print_triangle - prints a triangle of '#' characters of given size
 * @size: size of the triangle to print
 */
void print_triangle(int size)
{
	int i, j, k;

	k = 0;
	i = size - 1;

	while (k < size)
	{
		i = size - 1 - c;
		j = k + 1;
	while (i > 0)
	{
		_putchar(' ');
		i--;
	}
	while (j > 0)
	{
		_putchar('#');
		j--;
	}
		_putchar('\n');
		k++;
	}
	if (size <= 0)
		_putchar('\n');
}
