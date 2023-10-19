#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: maximum number of bytes to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n) {
int i = 0;

/**
 * copy characters from src to dest
 * until n bytes are copied or null byte is reached
 */
for (i = 0; i < n && src[i] != '\0'; i++) {
dest[i] = src[i];
}
/**

 * null-terminate dest if n bytes were copied
 */
if (n < i) {
dest[i] = '\0';
}
/**
 * remaining bytes of dest are filled with '\0'
 */
while (i < n) {
dest[i++] = '\0';
}
/**
 * return destination string
 */
return (dest);
}
