#include "main.h"
/**
 * rev_string - reverses a string in place
 *
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char k;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
	}
}

