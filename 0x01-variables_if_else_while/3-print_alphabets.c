#include <stdio.h>
/**
 * main - Entry point
 *
 * prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet++;
	}

	alphabet = 'A';

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
