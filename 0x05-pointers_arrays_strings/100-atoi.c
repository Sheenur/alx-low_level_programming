#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int num = 0;
int sign = 1;

while (*s != '\0')
{
if (*s == '-')
{
sign = -1;
}
else if (*s == '+')
{
sign = 1;
}
else if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
}
else
{
break;
}
s++;
}

return sign * num;
}
