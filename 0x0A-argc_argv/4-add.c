#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc : first argument
 * @argv:  secont argunment
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
int count;
int add = 0;
if (argc > 1)
{
for (count = 1; count < argc; count++)
{
if ((atoi(argv[count]) * 0) == 0 )
{

	add += atoi(argv[count]);
}
else
{
printf("Error\n");
return (1);
}
	}
printf("%d\n", add);
}
else
{
printf("0\n");
}
return (0);

}
