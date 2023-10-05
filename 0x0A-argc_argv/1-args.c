#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc : first argument
 * @argv:  secont argunment
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
int count;
if (argc)
{
	for (count = 0; count < argc; count++)
	{

	}
	printf("%d\n", count - 1);

}
return (0);
}
