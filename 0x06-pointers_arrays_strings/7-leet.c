#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	char *p = s;
	char leet[] = {'4', '3', '0', '7', '1'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	int i;

	while (*p != '\0')
	{
	for (i = 0; i < 5; i++)
	{
	if (*p == lower[i] || *p == upper[i])
	{
		*p = leet[i];
		break;
	}
	}
	p++;
	}

	return (s);
}

