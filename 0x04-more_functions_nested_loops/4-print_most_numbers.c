#include "main.h"

/**
 * print_most_numbers - function prints the numbers
 * from 0 to 9 while omitting 2 and 4.
 *
 * Return: Nothing.
 */

void print_most_numbers(void)
{
	int digit = '0', e, q;

	e = '2';
	q = '4';

	for (; digit <= '9'; digit++)
	{
		if (digit != e && digit != q)
			_putchar(digit);
	}
	_putchar('\n');
}
