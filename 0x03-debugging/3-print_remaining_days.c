#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int days = 0;

	int i;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		days_in_month[1] = 29;
	}
	for (i = 0; i < month - 1; i++)
	{
		days += days_in_month[i];
	}
		days += day;

	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month - 1])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
		printf("Day of the year: %d\n", days);
		printf("Remaining days: %d\n", (days_in_month[1] == 29 ? 366 : 365) - days);
}
