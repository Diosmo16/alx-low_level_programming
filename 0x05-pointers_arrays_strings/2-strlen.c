#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: argument passed
 *
 * Return: lens.
 */

int _strlen(char *s)
{
	int lens = 0;

	while (s[lens] != '\0')
		lens++;

	return (lens);
}
