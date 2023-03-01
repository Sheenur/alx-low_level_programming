#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to string.
 * Return: void.
 */
void rev_string(char *s)
{
int length = 0;
char temp;
int i;

/**
 * Get length of the string
 */
while (s[length] != '\0')
{
length++;
}

/**
 * Swap characters in the string to reverse it
 */
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
