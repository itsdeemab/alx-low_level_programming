include "main.h"
/**
 * print_triangle - prints a triangle of '#' characters of given size
 * @size: size of the triangle to print
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	return;
	}
	for (int row = 0; i < size; j++)
	{
	for (int col = 0; j <= row; j++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
}
