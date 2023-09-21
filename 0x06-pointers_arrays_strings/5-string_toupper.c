#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: int pointer string variable
 * Return: c
 */

char *string_toupper(char *c)
{
int len;

for (len = 0; c[len] != '\0'; len++)
{
if (c[len] > 96 && c[len] < 123)
{
c[len] -= 32;
}

}
return (c);
}
