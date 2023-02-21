#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: last digit of a number
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int z = n % 10;

	if (z < 0)
		z *= (-1);
	_putchar(z + '0');
	return (z);
}
