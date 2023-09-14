#include "main.h"

/**
* print_most_numbers - print the numbers from 0 to 9
* except 2 and 4
* @ch; variable to hold numbers
* Return: void
*/

void print_most_numbers(void)
{
int ch;
for (ch = 0; ch <= 9; ch++)
{
if (ch == 2 || ch == 4)
{
continue;
}
_putchar(ch + '0');
}
_putchar('\n');
}
