#include "main.h"

/**
 * _puts - return the length of a string
 * @str : Parameter accept  string
 * Return: nothng
 *
 */

void _puts(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
{
_putchar(str[c]);

}
_putchar('\n');
}
