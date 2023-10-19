#include "main.h"

char *_strncat(char *dest, char *src, int n) {
int dest_len = 0;
int i;

/* get length of dest string */
while (dest[dest_len] != '\0')
dest_len++;

/* concatenate src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len++] = src[i];

/* add null terminator */
dest[dest_len] = '\0';

return (dest);
}
