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
char ch;
for (n = 0 ; n <= 9 ; n++)
{
putchar(n % 10 + '0');
}
for (ch = 'A' ; ch <= 'F' ; ch++)
{
putchar(tolower(ch));
}
putchar('\n');

return (0);
}
