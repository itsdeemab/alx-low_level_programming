#include <stdio.h>
#include "main"
/**
 * print_array - Prints n elements of an array of integers.
 *
 * @a: A pointer to the array of integers.
 * @n: The number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if (i != n - 1)
		printf(", ");
	}
	printf("\n");
}
