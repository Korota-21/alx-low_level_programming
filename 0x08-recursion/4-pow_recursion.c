#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion -  retun the power of x
 * @x : first parameter
 * @y : second parmeter
 * Return: -1 if y less than o
 *
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
{
	return (-1);
}

if (y == 0)
{
	return (1);
}
return (x * _pow_recursion(x, y - 1));
}
