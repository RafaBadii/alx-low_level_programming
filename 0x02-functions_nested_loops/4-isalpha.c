#include "main.h"

/**
 * _isalpha - function that check if character (c) is alphabet
 *
 *@c: The character to be checked
 *
 * Return: 1 if (c) is alphabet (a-z) and (A-Z).Otherwise return 0
*/

int _isalpha(int c)
{

	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);

	return (0);
}
