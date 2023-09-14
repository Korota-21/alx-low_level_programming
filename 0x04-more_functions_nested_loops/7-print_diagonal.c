#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of \ that should be printed
 *
 * Description: prints \n if n is <= 0
 * only use _putchar function to print
 *
 * Return: void
 */

void print_diagonal(int n)
{
if (n > 0)
{
int i;
i = 0;
while (i < n)
{
int j;
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
i++;
if (i < n)
{
_putchar('\n');
}
}
}
_putchar('\n');

}
