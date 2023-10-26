#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate square root of
 * Return: square root of n or -1 if no square root
 */
int _sqrt_recursion(int n)
{
return (sqrt_helper(n, 1));
}
/**
 * sqrt_helper - helper function for sqrt recursion
 * @n: number to calculate square root of
 * @i: current potential square root
 * Return: square root or -1 if no sqrt
 */
int sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
else if (i * i == n)
return (i);
return (sqrt_helper(n, i + 1));
}
