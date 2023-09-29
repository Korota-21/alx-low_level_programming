#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2D array
 * @size: size x size of the square matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int i = 0;
int j = 0;
int dia1 = 0;
int dia2 = 0;
int len = size * size;

while (i < len)
{
dia1 += a[i];
i += (size + 1);
}

printf("%d, ", dia1);
for (j = size - 1; j < len - 1; j += size - 1)
{

dia2 += a[j];
}

printf("%d\n", dia2);
}
