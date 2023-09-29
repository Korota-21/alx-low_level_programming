#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checkfor prime number
 * @n : parameter nterger passed
 * Return: 1 if prime else return 0
 */

int is_prime_number(int n)
{
int i = 2;
int half = n / 2;
int temp = 0;
if (n <= 1)
{
	return (0);
}
if (i < half)
{
if (n % i == 0)
{
temp += 1;
}
i++;
}
if (temp == 0)
{
return (1);
}

return (0);
}

