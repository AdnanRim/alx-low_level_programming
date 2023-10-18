#include "main.h"

void print_rev(char *s)
{
int len = 0;
int i;

/* determine string length */
while (s[len] != '\0')
{
len++;
}

/* print string in reverse */
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
