#include "main.h"

/**
 * main - Entry point
 *
 * Decription: Program prints the alphabet, in lowercase,using the _putchar.
 *
 * Return: Always - (Success)
*/

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
		_putchar(letter);

	_putchar('\n');
}

