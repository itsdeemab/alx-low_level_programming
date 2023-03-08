#include "main.h"
/**
 * factorial - returns the factorial of a given number
 *
 * @n: the number to compute the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative
 *
 * Description:
 * This function takes an integer as input, and returns its factorial. The
 * factorial of a number is the product of all positive integers from 1 up to
 * and including that number. If the input is negative, the function returns -1
 * to indicate an error. If the input is 0, the function returns 1.
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
