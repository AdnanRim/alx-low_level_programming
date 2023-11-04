#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to use
 * Return: Pointer to newly allocated space in memory containing the
 * concatenated strings. Null on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) {
char *concat;
unsigned int s1len = s1 ? strlen(s1) : 0;
unsigned int s2len = s2 ? strlen(s2) : 0;
if (n < s2len)
s2len = n;
concat = malloc(s1len + s2len + 1);
if (!concat)
return (NULL);
if (s1)
strncpy(concat, s1, s1len);
strncpy(concat + s1len, s2, s2len);
concat[s1len + s2len] = '\0';
return (concat);
}
