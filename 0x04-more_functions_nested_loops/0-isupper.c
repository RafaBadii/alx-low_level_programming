#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * _isupper - function checks for uppercase character
 * @c: input character
 * Return: 0 Always - (Success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
