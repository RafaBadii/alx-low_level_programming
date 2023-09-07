#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: char string 1
 * @s2: char string 2
 * @n:  unsigned int, number of bytes from s2
 * Return: pointer to a newly allocated space in memory, concated strings
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int x, y, s1_size, s2_size;

	/*Check if the strings are NULL*/
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	/*Determine the size of strings*/
	for (s1_size = 0; s1[s1_size] != '\0'; s1_size++)
		;

	for (s2_size = 0; s2[s2_size] != '\0'; s2_size++)
		;

	/*Memorry allocation*/
	ptr = malloc(s1_size + n + 1); /*Termination*/
	if (ptr == 0)
		return (NULL);

	/*Print s1 string to ptr*/
	for (x = 0; s1[x] != '\0'; x++)
		ptr[x] = s1[x];

	/*Print s2 string to ptr*/
	for (y = 0; y < n; y++)
	{
		ptr[x] = s2[y];
		x++;
	}

	ptr[x] = '\0';
	return (ptr);
}
