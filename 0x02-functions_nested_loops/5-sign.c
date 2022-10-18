#include "main.h"

/**
 * print_sign - Check description.
 * @n: character to be printed.
 *
 * Description: function print the sign of a number.
 * for more info look at code below.
 * Return: renum.
 */

int print_sign(int n)
{
	int renum;

	if (n > 0)
	{
		_putchar('+');
		renum = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		renum = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		renum = 0;
	}

	return (renum);
}
