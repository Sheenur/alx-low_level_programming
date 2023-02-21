#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
  char letter;
  for (letter ='a'; letter <= 'z'; letter++)
    purchar(letter);
  for (letter = 'A'; letter <= 'Z'; letter++)
    purchar(letter);

  purchar('\n');

  return (0);
}
