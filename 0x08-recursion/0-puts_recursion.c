#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line, using recursion
 *
 * @s: the string to print
 *
 * Description:
 * This function takes a pointer to a string as input, and prints the string to
 * the standard output, followed by a new line. It uses recursion to print each
 * character of the string one at a time, and stops when the end of the string
 * is reached. If the string is empty, it simply prints a new line and returns.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
