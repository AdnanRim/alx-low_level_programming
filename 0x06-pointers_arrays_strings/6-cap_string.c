#include "main.h"
#include <stdio.h>
#include <ctype.h>

int is_separator(char c);

char *cap_string(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i == 0)
{
str[i] = toupper(str[i]);
}
else if (is_separator(str[i-1]) && str[i] != '\0')
{
str[i] = toupper(str[i]);
}
i++;
}

return (str);
}

int is_separator(char c)
{
if (c == ' ' || c == '\t' || c == '\n' || c == '.' || c == '!' ||
c == '?' || c == '"' || c == ',' || c == ';' || c == '(' ||
c == ')' || c == '{' || c == '}')
return (1);
return (0);
}
