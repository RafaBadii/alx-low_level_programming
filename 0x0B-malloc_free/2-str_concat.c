#include "main.h"

/**
 * *str_concat - Function concatenates two strings.
 * @s1: char str 1.
 * @s2: char str 2.
 * Return: Null on failure.
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	unsigned int length;
	unsigned int size1, size2, i;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	length = size1 + size2 + 1; /* +1 for termination */
	ptr = malloc(length * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1 + size2; i++) /* s1 */
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1]; /* to start from 0 in s2 */
	}
	ptr[i] = '\0';
	return (ptr);
}
