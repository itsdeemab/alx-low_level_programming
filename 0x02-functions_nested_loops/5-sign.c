#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 and prints + if n is greater than zero;
 *         0 and prints 0 if n is zero;
 *        -1 and prints - if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		putchar('0');
	return (0);
	}
	else
	{
		putchar('-');
	return (-1);
	}
}
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 19;

	printf("The sign of %d is ", num);
	print_sign(num);
	putchar('\n');

	return (0);
}
