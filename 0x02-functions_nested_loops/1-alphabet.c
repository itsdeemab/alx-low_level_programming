#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	_putchar(alphabet);
	alphabet++;
	}
	_putchar('\n');
}
