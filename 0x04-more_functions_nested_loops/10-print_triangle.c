#include "main.h"
/**
 * print_triangle - prints a triangle of '#' characters of given size
 * @size: size of the triangle to print
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	return;
	}

	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size-i; j++)
	{
		_putchar(' ');
	}
		for (int k = 1; k <= i; k++)
	{
		_putchar('#');
        }
		_putchar('\n');
	}
}

