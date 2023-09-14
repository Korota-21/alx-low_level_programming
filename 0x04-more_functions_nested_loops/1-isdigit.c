#include "main.h"

/**
* _isdigit - takes a number  and returns 1
* if its an upper case
* @c: user entry
*
* Return: 1 if number
*/

int _isdigit(int c)
{
if (c >= '0'  && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
