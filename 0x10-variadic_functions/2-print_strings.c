#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a newline
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * Return: No return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *string;
va_start(ap, n);
for (i = 0; i < n; i++)
{
string = va_arg(ap, char *);
if (string == NULL)
printf("(nil)");
else
printf("%s", string);
if (separator && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
