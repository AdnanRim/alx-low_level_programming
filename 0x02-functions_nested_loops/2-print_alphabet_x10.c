#include "main.h"

/**
 * Prints the lowercase alphabet 10 times, each followed by a newline character
 *
 * Return: void
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
