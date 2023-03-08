#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: the base number
 * @y: the exponent
 *
 * Return: x to the power of y, or -1 if y is negative
 *
 * Description:
 * This function takes two integers as input: x, the base number, and y, the
 * exponent. It returns the value of x raised to the power of y. If y is
 * negative, the function returns -1 to indicate an error. If y is 0, the
 * function returns 1 (since any number raised to the power of 0 is 1). If y is
 * positive, the function recursively multiplies x by itself, decreasing y by
 * 1 each time, until y is 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
