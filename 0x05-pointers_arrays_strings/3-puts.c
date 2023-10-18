#include <unistd.h>

void _puts(char *str)
{
int c;

while ((c = *str++))
{
write(1, &c, 1);
}

write(1, "\n", 1);
}
