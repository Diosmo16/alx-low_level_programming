#include "main.h"

/**
 * _isupper - the function returns 1 if a character is
 * uppercase and 0 otherwise.
 * @c: character to be tested.
 *
 * Return: renum.
 */

int _isupper(int c)
{
	char upper;
	int renum = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
			renum = 1;
	}

	return (renum);
}
