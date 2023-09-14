#include "main.h"
/**
* _isalpha - checks for alphabet
* @c: the character to check
* Return: 1 if c is lowercase,or upper,  0 otherwise
*/


int _isalpha(int c)
{

if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
