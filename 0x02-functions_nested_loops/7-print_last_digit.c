#include "main.h"
/*
 * print_last_digit - prints the last digit of a number.
 * @n: last digit of a number
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if ( >= 0)
	{
		a = n % 10;
	}
	else
	{
		a = -n % 10;
	}
	_putchar(a + '0');
	return (a);
}

