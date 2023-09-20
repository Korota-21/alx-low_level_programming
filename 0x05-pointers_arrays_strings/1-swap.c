#include <stdio.h>

/**
 * swap_int - set to swap interger
 * @b: a pointer to save asign second momory location
 * @a: a pointer with to save the first memory location
 * Return: nothing
 *
 */

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
