#include "main.h"

/**
 * print_numbers - function prints numbers 0 to 9
 * to standard output.
 *
 * Return: Nothing.
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
