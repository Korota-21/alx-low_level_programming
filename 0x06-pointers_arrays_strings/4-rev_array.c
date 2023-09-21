#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of pointer integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;
	int len;

	for (i = 0; i < (n / 2); i++)
	{
		len = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = len;
	}
}
