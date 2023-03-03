#include <stdio.h>

/**
 * print_buffer - Prints the content of size bytes of the buffer pointed by b
 * @b: Pointer to the buffer to be printed
 * @size: Number of bytes to be printed from buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
putchar('\n');
return;
}

for (i = 0; i < size; i += 10)
{
/* Print address */
printf("%08x: ", i);

/* Print hex bytes */
for (j = i; j < i + 10; j += 2)
{
if (j < size)
printf("%02x", *(b + j));
else
printf("  ");
if (j + 1 < size)
printf("%02x ", *(b + j + 1));
else
printf("   ");
}

/* Print ASCII bytes */
for (j = i; j < i + 10; j++)
{
if (j >= size)
break;
if (*(b + j) >= 32 && *(b + j) <= 126)
printf("%c", *(b + j));
else
printf(".");
}

/* Print newline */
printf("\n");
}
}
