#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
char *leet_str = str;
char *letters = "aAeEoOtTlL";
char *leet_codes = "4433007711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
leet_str[i] = leet_codes[j];
break;
}
}
}

return leet_str;
}
