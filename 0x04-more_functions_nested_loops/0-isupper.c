#include "main.h"

/**
* _isupper - takes a character and return 1
* if its an upper case
* @c: letter of the alphabet
*
* Return: 1 if upper case
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
