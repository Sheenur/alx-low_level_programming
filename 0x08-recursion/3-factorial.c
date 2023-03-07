#include <stdio.h>

/**
 * factorial - Computes the factorial of a number.
 * @n: Number to compute the factorial of.
 *
 * Return: The factorial of the number n. If n is negative, returns -1 to indicate an error.
 */
int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0)
return (1);

return (n * factorial(n - 1));
}
