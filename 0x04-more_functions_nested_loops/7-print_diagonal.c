#include "main.h"

/**
 * print_diagonal - function prints a diagonal line
 * to stdout
 * @n: argument passed
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
