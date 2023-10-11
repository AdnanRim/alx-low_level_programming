#include "main.h"

/**
 * print_alphabet_x10 prints the lowercase alphabet 10 times followed by a newline
 *
 * This function prints the lowercase alphabet 10 times followed by a newline character
 * using the _putchar function.
 */
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
