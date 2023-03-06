#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to the char pointer to set
 * @to: char pointer to set the value to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
*s = to;
}
