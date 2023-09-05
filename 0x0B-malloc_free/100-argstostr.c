#include "main.h"

/**
 * _strlen - Function find the length of a string.
 * @str: string.
 * Return: int.
*/

int _strlen(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;
	return (size);
}


/**
 * argstostr - Function concatenates the arguments and gives pointer.
 * @ac: the argc for arguments count.
 * @av: the arguments vector to work on it.
 * Return: the pointer to a new mymystring or NULL if failed.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, Nc = 0, counter = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, Nc++) /* newline */
		Nc += _strlen(av[i]); /* characters */
	str = malloc(sizeof(char) * Nc + 1); /* terrmination */

	if (str == 0)
		return (NULL);

	for (i = 0; i < ac; i++) /* Rows - arguments */
	{
		for (j = 0; av[i][j] != '\0'; j++, counter++)
			str[counter] = av[i][j];

		str[counter] = '\n';
		counter++;
	}

	str[counter] = '\0';
	return (str);
}
