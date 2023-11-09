#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name by calling the function pointed to
 * @name: The name of the person
 * @f: The function pointer that points to the function to call
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
