#include "main.h"
/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to string to be searched.
 * @c: Character to be located.
 *
 * Return: Pointer to the first occurrence of the c char in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}

	if (*s == c)
	return (s);
	return ('\0');
}
