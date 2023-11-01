#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Pointer to new string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, j, len1, len2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
concat = malloc(len1 + len2 + 1);
if (concat == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
concat[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
concat[i++] = s2[j];
concat[i] = '\0';
return (concat);
}
