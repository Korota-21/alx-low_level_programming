#include <stdio.h>
#include "main.h"

/**
 * print_array - return the length of a string
 * @a : name of array
 * @n : size of array
 * Return: length of string
 *
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i == n - 1)
{
continue;
}
else
{
printf(", ");
}
}
printf("\n");

}
