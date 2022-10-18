#include "main.h"

/**
 * _isalpha - check description
 * @c: Character to be printed
 *
 * Description: function contains a piece of code,
 * which returns 1 if an alphabet is lowercase or
 * uppercase and returns 0 if otherwise.
 * Return: renum.
 */

int _isalpha(int c)
{
	char l, u;
	int renum = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (c == l || c == u)
				renum = 1;
		}
	}

	return (renum);
}
