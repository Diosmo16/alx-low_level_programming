#include "main.h"

/**
 * _isdigit - function returns 1 if character is a digit
 * and returns 0 otherwise.
 * @c: argument passed in function.
 *
 * Return: renum.
 */

int _isdigit(int c)
{
	char digit;
	int renum = 0;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (c == digit)
			renum = 1;
	}

	return (renum);
}
