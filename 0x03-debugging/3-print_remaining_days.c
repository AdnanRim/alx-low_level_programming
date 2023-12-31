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
int isleap = 0;

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
isleap = 1;

if (isleap && month > 2 && day == 60)
day++;

printf("Day of the year: %d\n", day);

if (isleap)
printf("Remaining days: %d\n", 366 - day);
else
printf("Remaining days: %d\n", 365 - day);
}
