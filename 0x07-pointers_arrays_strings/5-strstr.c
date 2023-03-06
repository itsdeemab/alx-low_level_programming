#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to string to be searched.
 * @needle: Pointer to string containing the substring to be found.
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	if (*needle == '\0')
	return (haystack);

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
	if (*(haystack + i) == *needle)
	{
	for (j = i, k = 0; *(needle + k) != '\0'; j++, k++)
		{
	if (*(haystack + j) != *(needle + k) || *(haystack + j) == '\0')
	break;
	}
	if (*(needle + k) == '\0')
	return (haystack + i);
	}
	}
	return ('\0');
}
