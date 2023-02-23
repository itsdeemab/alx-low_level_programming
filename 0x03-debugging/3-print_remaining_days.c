#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - Takes a date and prints how many days are
 *                        left in the year, taking leap years into account.
 *
 * @day:   Day of month.
 * @month: Month in number format.
 * @year:  Year.
 *
 * Return: void
 */
void print_remaining_days(int day, int month, int year)
{
	int days_in_month[] = {
	31, 28 + ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0),
	31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};

	int days_left = 0;
	int i;

	for (i = month - 1; i < 12; i++)
	{
		days_left += days_in_month[i];
	}
	days_left -= day;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("Day of the year: %d\n", 366 - days_left);
		printf("Remaining days: %d\n", days_left);
	}
	else
	{
		printf("Day of the year: %d\n", 365 - days_left);
		printf("Remaining days: %d\n", days_left);
	}
}
