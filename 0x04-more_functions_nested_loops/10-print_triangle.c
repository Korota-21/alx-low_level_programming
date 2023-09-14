#include "main.h"

/**
  * print_triangle - prints triangle, followed by a new line
  *
  * @size: size of the triangle to be printed
  *
  * Return: void
  */

void print_triangle(int size)
{
if (size > 0)
{
int i;
i = 1;
while (i <= size)
{
int j, k;
j = k = 0;
while (j < size - i)
{
_putchar(' ');
j++;
}
while (k < i)
{
_putchar('#');
k++;
}
i++;
if (i < size + 1)
{
_putchar('\n');
}
}
}
_putchar('\n');
}
