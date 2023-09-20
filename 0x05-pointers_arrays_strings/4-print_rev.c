#include "main.h"

/**
 * print_rev - return the length of a string
 * @s : Parameter accept  string
 * Return: nothng
 *
 */

void print_rev(char *s)
{

int len = 0;

while (s[len])
{
len++;
}
len--;
while (len >= 0)

{
_putchar(s[len]);
len--;
}
_putchar(10);
}
