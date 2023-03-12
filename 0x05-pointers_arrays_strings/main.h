#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - putchar
 */
int _putchar(char c);

/**
 *reset_to_98 - takes a pointer to an int as parameter and updates the value
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 */
int _strlen(char *s);

/**
 * _puts - prints a string, followed by a new line, to stdout
 */
void _puts(char *str);

/**
 * print_rev - prints a string in reverse, followed by a new line
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string in place
 */
void rev_string(char *s);

void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);


#endif /* MAIN_H */