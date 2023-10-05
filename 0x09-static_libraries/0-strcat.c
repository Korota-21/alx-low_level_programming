#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: char pointer variable
 * @src: char pointer variabe
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int len1, len2;
for (len1 = 0; dest[len1] != '\0'; len1++)
;
for (len2 = 0; src[len2] != '\0'; len2++)

dest[len1 + len2] = src[len2];

dest[len1 + len2] = '\0';

return (dest);
}
