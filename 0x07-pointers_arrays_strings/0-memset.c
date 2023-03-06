#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to memory area to be filled.
 * @b: Constant byte to fill memory with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(s + i) = b;

	return (s);
}
