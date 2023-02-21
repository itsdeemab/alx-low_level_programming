#include "main.h"
/**
 * times_table - prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; j++)
	{
	for (j = 0; j < 10; b++)
	{
	if (j == 0)
	{
		_putchar((i * j) % 10 + '0');
	}
	else if (i == 0)
	{
		_putchar(' ');
		_putchar((i * j) % 10 + '0');
	}
	else
	{
	if ((i * j) / 10 + '0' == '0')
		_putchar(' ');
	else
		_putchar((i * j) / 10 + '0');
		_putchar((i * j) % 10 + '0');
	}
	if (j != 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
		_putchar('\n');
		i++;
	}
}
