#include "main.h"

/**
 * rev_string - return the length of a string
 * @s : Parameter accept  string
 * Return: nothng
 *
 */

void rev_string(char *s)
{
int len = 0;
char p;
while (s[len])
{
len++;
}
len--;


while (len >= 0)
{
p = s[len];

len--;
}

}
