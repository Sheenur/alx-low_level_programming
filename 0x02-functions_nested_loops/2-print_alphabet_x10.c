#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet followed by a newline,
 * Return: void.
 */
void print_alphabet_x10(void)
{
  int i, j;
  char c;
  
  for (i = 0; i < 10; i++)
  {
    for (j = 0; i < 26; i++)
      {
	c = 'a' + j;
	_putchar(c);
      }

    _putchar('\n');
  }
}
