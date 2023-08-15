#include "main.h"
i

/**
 * _islower - function that check if character 'c' is lower case.
 *
 * Return: return 1 if (c) is lowercase
		otherwise return 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
