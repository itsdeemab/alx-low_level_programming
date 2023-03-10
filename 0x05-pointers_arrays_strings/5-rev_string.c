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
	int len = 0;
	int i;
	char j;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		j = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = j;
	}
}
