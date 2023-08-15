#include "main.h"

/**
 * print_alphabet -  function prints the alphabet, in lowercase using _putchar.
 *
 * Return: void.
*/

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}

