#include "main.h"

/**
 * main - print_alphabet - Prints the alphabet in lowercase, followed by a new line
 * Return: void.
 */

void print_alphabet(void)
{
  int i;
  char c;
  for (i = 0; i < 26; i++)
    {
      c = 'a' + i;
      _putchar(c);
    }
  _putchar('\n');
}
