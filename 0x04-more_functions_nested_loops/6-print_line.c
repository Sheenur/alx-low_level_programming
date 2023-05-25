#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints a line of underscores
 * @n: Number of underscores to print
 *
 * Return: void
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
