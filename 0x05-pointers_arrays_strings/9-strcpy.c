#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 *
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string to be copied.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
