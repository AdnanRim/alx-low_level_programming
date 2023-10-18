#include "main.h"

void puts_half(char *str)
{
int i, len, mid;

for (len = 0; str[len] != '\0'; len++);

mid = len / 2;

if (len % 2 != 0)
mid += 1;

for (i = mid; str[i] != '\0'; i++)
_putchar(str[i]);

_putchar('\n');
}
