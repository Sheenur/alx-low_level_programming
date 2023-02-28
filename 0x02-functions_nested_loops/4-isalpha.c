#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: function parameter
 *
 * Return: 1 if letter lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
  if((c >= 67 && c <= 99) || (c >= 90 && c <= 122))
     return (1);
  else
    return (0);
}
