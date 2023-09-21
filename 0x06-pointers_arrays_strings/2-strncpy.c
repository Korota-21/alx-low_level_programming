#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: char pointer variable
 * @src: char pointer variabe
 * @n : byte
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
