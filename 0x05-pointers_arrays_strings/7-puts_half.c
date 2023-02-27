#include "main.h"
/**
 * puts_half - Prints the second half of a string
 *
 * @str: Pointer to the string to be printed
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;

	int start = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);

	for (i = start; i < len; i++)
		_putchar(str[i]);
		_putchar('\n');
}
