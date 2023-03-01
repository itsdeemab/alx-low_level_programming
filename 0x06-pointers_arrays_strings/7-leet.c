#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char leet[] = "aAeEoOtTlL44337011";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (s[i] == leet[j])
	{
		s[i] = leet[j + 10];
		break;
	}
	}
	}
	return (s);
}
