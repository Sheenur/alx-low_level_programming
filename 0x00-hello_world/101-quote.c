#include <unistd.h>

/**
 * main - entry point of the program
 *
 * Return: 1 (always)
 */
int main(void)
{
  char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  ssize_t len = 0;

  while (str[len] != '\0')
    len++;

  write(2, str, len);

  return (1);
}
