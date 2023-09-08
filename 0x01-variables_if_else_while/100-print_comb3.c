#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
int n;
int p;

for (n = 0 ; n < 9 ; n++)
{
for (p = n + 1 ; p <= 9 ; p++)
{
putchar(n + '0');
putchar(p + '0');
if (n < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
