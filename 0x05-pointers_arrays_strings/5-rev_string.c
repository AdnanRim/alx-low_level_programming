#include "main.h"

void rev_string(char *s)
{
int i, j, str_len;
char temp;

str_len = 0;
while (s[str_len] != '\0')
{
str_len++;
}

i = 0;
j = str_len - 1;

while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
