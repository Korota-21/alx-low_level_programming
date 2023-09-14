#include "main.h"

/**
* print_number - print number using putchar
* @n: parameter hold  numbers
* Return: void
*/

void print_number(int n)
{
if (n >= 10)
{
_putchar(n / 10 + '0');
}
else
{
_putchar(n % 10  + '0');

}

}
