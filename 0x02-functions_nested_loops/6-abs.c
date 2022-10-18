#include "main.h"

/**
 * _abs - check description
 * @r: character to be printed
 *
 * Description: function prints the absolute value
 * of an integer.
 * Return: Nothing
 */

int _abs(int r)
{
	if (r < 0)
		return (r * -1);
	else
		return (r);
}
