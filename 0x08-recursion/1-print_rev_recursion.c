#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse, using recursion
 *
 * @s: the string to print
 *
 * Description:
 * This function takes a pointer to a string as input, and prints the string to
 * the standard output in reverse order. It uses recursion to print each
 * character of the string in reverse order, and stops when the beginning of
 * the string is reached. If the string is empty, it does nothing and returns.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
