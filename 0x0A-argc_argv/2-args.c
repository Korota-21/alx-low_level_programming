#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc : first argument
 * @argv:  secont argunment
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
int count;

if (argc >= 1)
{
	for (count = 0; count < argc; count++)
	{


	printf("%s\n", argv[count]);
	}
}
return (0);
}
