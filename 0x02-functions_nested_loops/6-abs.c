#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: integer to be computed
 * Return: An absolue value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
