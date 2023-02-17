#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	if (i != 0)
	{
		putchar(',');
		putchar(' ');
	}
	putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
