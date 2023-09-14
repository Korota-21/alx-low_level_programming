#include "main.h"
/**
* print_to_98 - greater, less, zero
* @n: parameter to pass
* Return: 1 if c is lowercase, 0 otherwise
*/


void print_to_98(int n)
{
if (n > 98)
{
while (n != 98)
{
_putchar (n % 10 + '0');
n--;
}
}
else if (n < 98)
{
while (n != 98)
{
if (n < 0)
{
_putchar('-');
n = n * -1;
}
if (n / 10)
print_to_98(n / 10);
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
n++;
}
}
else
{
_putchar(n / 10 + '0');
}
}
