#include "math.h"

/**
 * print_last_digit - check description
 * @r: character to be printed
 *
 * Description: function prints the last digit of
 * a number
 * Return: last digit of r
 */

int print_last_digit(int r)
{
	int n;

	if (r >= 0)
		n = r % 10;
	else
		n = -1 * (r % 10);

	return (n);
}
