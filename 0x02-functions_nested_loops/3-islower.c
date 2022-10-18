#include "main.h"

/**
 * _islower - check description.
 * @c: the argument passed.
 *
 * Description: function returns 1 if a character
 * is lowercase and 0 otherwise.
 * Return: renum.
 */

int _islower(int c)
{
	char a;
	int renum = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			renum = 1;
	}

	return (renum);
}
