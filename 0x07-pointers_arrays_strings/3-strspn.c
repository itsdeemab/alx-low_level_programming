#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to string to be searched.
 * @accept: Pointer to string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	for (j = 0; *(accept + j) != '\0'; j++)
	{
	if (*(s + i) == *(accept + j))
	{
	len++;
	break;
	}
	}
	if (*(accept + j) == '\0')
	return (len);
	}
	return (len);
}
