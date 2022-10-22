#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14
 * 10 times in a row.
 *
 * Return: Nothing.
 */

void most_numbers(void)
{
	int num2, num1 = 0;

	for (; num1 < 10; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			if (num2 > 9)
				_putchar(num2 / 10 + '0');
			_putchar(num2 % 10 + '0');
		}
		_putchar('\n');
	}
}
