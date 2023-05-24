#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, j, k;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = j * i;

print_entry(k, j);
}

_putchar('\n');
}
}
}

/**
 * print_entry - prints a single entry in the times table
 * @k: the product of i and j
 * @j: the value of j in the times table
 */
void print_entry(int k, int j)
{
if (j != 0)
{
_putchar(',');
_putchar(' ');

if (k < 10)
_putchar(' ');
else if (k < 100)
_putchar((k / 10) + '0');
else
{
_putchar((k / 100) + '0');
_putchar(((k / 10) % 10) + '0');
}

_putchar((k % 10) + '0');
}
else
{
_putchar(k + '0');
}
}
