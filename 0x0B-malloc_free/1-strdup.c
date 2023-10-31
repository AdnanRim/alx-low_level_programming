#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * containing a copy of the string given as a parameter.
 * @str: The string to duplicate
 * Return: Pointer to the duplicated string or NULL if insufficient memory
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;
if (str == NULL)
return (NULL);
len = 0;
while (str[len])
len++;
dup = malloc(len + 1);
if (dup == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
