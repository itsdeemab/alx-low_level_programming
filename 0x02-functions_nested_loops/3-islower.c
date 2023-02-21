i#include <stdio.h>
#include <ctype.h>
/**
 * _islower - tests whether a given character is a lowercase letter
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
