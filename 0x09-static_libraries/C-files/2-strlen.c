#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @s: char pointer
 * Return: length of the string
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)	/* '\0': end of the string */
	{					/* s++: adress increment */
		count++;
	}
	return (count);
}
