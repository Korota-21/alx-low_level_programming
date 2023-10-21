#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
