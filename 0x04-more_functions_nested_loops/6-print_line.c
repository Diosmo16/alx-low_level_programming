#include "main.h"

/**
 * print_line - function prints a straight line
 * to standard output. for more info, look at code.
 * @n: argument passed
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
