#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings using malloc
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	concat_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		concat_str[i + j] = s2[j];
	}

	concat_str[i + j] = '\0';

return (concat_str);
}
