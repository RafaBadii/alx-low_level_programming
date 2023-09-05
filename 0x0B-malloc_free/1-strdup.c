#include "main.h"

/**
 * _strdup - Function returns *ptr to new alloc space in memory.
 * @str: char memory value.
 * Return: Null if fails or if str is NULL.
*/

char *_strdup(char *str)
{
	char *ptr;
	int size, i;

	if (str == 0)
		return (NULL);

	/* Size of the string */
	for (size = 0; str[size] != '\0'; size++)
		;

	/* +1 to include the last str character */
	ptr = malloc(size * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
