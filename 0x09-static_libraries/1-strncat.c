#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: char pointer variable
 * @src: char pointer variabe
 * @n : byte
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

int i;
int j;
for (j = 0; dest[j] != '\0'; j++)
;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[j + i] = src[i];
dest[j + i] = '\0';
return (dest);
}
