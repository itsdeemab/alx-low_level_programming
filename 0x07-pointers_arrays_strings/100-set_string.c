#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to the string to be set
 * @to: pointer to the new string value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
