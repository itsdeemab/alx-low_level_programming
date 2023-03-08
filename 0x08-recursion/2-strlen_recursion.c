#include "main.h"
/**
 * _strlen_recursion - returns the length of a string, using recursion
 *
 * @s: the string to get the length of
 *
 * Return: the length of the string
 *
 * Description:
 * This function takes a pointer to a string as input, and returns the length
 * of the string. It uses recursion to count each character of the string one
 * at a time, and stops when the end of the string is reached. If the string is
 * empty, it simply returns 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
