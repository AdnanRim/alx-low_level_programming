#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
bool isPositiveNumber(const char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
{
return (false);
}
str++;
}
return (true);
}
int main(int argc, char *argv[])
{
int sum = 0;
int i;
if (argc == 1)
{
printf("0\n");
return (0);
}
i = 1;
for (; i < argc; i++)
{
if (!isPositiveNumber(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
