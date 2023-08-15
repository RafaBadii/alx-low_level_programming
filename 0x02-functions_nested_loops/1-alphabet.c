#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet(Program prints the alphabet, in lowercase,using the _putchar).
 *
 * Return: voidd
*/

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}

