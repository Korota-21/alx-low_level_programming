#include "main.h"
/**
* print_sign - greater, less, zero
* @n: parameter to pass
* Return: 1 if c is lowercase, 0 otherwise
*/


int print_sign(int n)
{


if (n > 0)
{

_putchar (43);
return (1);
}
else if (n < 0)
{

_putchar (45);
return (1);
}
else
{

_putchar(48);
return (0);
}
}
