#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: List of types of arguments
 * Return: No return
 */
void print_all(const char * const format, ...)
{
va_list ap;
int i = 0;
char *separator = "";
va_start(ap, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(ap, int));
break;
case 'i':
printf("%s%d", separator, va_arg(ap, int));
break;
case 'f':
printf("%s%f", separator, va_arg(ap, double));
break;
case 's':
printf("%s%s", separator, va_arg(ap, char*));
break;
}
i++;
separator = ", ";
}
printf("\n");
va_end(ap);
}
