#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: pointer string variable
 * Return: `str`
 */

char *cap_string(char *str)
{
	int i, c;
	int sepa;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, sepa = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			sepa = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == str[i])
				sepa = 1;
		}

		if (sepa)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				sepa = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				sepa = 0;
			else if (str[i] > 47 && str[i] < 58)
				sepa = 0;
		}
	}
	return (str);
}
