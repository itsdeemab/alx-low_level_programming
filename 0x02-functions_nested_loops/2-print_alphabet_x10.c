#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
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
/**
 * main - Entry point
 * This is a program has a function that prints the alphabet x10, in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

