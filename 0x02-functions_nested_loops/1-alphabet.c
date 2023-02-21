#include "main.h"
/**
 * main - Entry point
 * This is a program has a function that prints the alphabet, in lowercase.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
}
