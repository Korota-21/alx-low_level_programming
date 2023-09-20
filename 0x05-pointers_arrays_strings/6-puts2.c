#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 *
 * @str: char pointer variable
 *
 * Return: nothing
 */

void puts2(char *str)
{
int p, len;

for (p = 0; str[p] != '\0'; p++)
{
;
}

for (len = 0; len < p; len += 2)
{
_putchar(str[len]);
}
_putchar(10);
}
