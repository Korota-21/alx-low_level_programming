#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay = haystack;
	char *nee = needle;

	while (*hay)
	{
		nee = needle;
		hay = haystack;
		while (*nee)
		{
			if (*hay == *nee)
			{
				nee++;
				hay++;
			}
			else
				break;
		}
		if (*nee == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
