#include "main.h"

/**
 * main - Entry point
 *
 * Description: Modifies an integer in an array and prints it to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*(a + 2) = 98; /* modify value at index 2 of array a */
  /* print value at index 2 */
_putchar('a');
_putchar('[');
_putchar('2');
_putchar(']');
_putchar(' ');
_putchar('=');
_putchar(' ');
_putchar((*(a + 2) / 10) + '0');
_putchar((*(a + 2) % 10) + '0');
_putchar('\n');
return (0);
}
