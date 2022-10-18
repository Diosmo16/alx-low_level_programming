#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: function contains a piece of code
 * that prints the alphabet in lowercase using the
 * _putchar function.
 * Return: Nothing
 */

void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
	_putchar('\n');
}
