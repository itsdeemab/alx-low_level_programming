#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if error occurred
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
	{
		if (!isdigit(argv[i][j]))
	{
		printf("Error\n");
		return (1);
	}
	}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
