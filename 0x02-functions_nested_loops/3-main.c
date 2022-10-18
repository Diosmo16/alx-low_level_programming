#include "main.h"

/**
 * main - check description.
 *
 * Description: the function _islower is called.
 * Return: 0
 */

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
