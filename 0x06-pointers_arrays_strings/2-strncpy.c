#include <stdio.h>

/**
 * _strncpy - Copy n bytes of string
 *
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source buffer
 * @n: Maximum number of bytes to be copied
 *
 * Return: Pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
