#include "main.h"
#include <stdio.h>

unsigned int _strspn(char *s, char *accept) {
unsigned int i;
for (i = 0; s[i] != '\0'; i++) {
char c = s[i];
int j;
for (j = 0; accept[j] != '\0'; j++) {
if (c == accept[j])
break;
}
if (accept[j] == '\0')
return (i);
}
return (i);
}
