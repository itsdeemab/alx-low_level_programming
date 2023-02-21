#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 26; j++)
	{
		putchar(alphabet++);
	}
		putchar('\n');
		alphabet = 'a';
	}
}
