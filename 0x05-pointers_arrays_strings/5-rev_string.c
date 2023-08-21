#include "main.h"


/**
 * rev_string - function that reverses a string
 * @s: char string
 * Return: void
*/

void rev_string(char *s)
{
	int i, I;
	int rev;

	for (i = 0; s[i] != '\0'; i++) /* count the length of the string */
	{
	}

	for (I = 0; I < i / 2; I++)
	{
		rev = s[I];
		s[I] = s[i - 1 - I];
		s[i - 1 - I] = rev;
	}
	
}
