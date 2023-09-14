#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*times_table - return 9 times multiplication table
* Return: Always  Plus  (Success)
*/
void times_table(void)
{
int i;
int j;
int mult;
for (j = 0; j <= 9; j++)
{

for (i = 0;  i <= 9; i++)
{
mult = i * j;
printf("%d, ", mult);
}
printf("\n");
}
}
