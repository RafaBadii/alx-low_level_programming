#include "main.h"

/**
 * _strstr - function locates a substring.
 * @haystack: char string
 * @needle: char substring
 * Return: pointer haystack or NULL.
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p = haystack;
		char *pp = needle;

		while (*pp == *haystack && *pp != '\0' && *haystack != '\0')
		{
			haystack++;
			pp++;
		}
		if (*pp == '\0')
			return (p);
		haystack = p + 1;
	}
	return (NULL);
}
