#include "main.h"

/**
 * _strcpy - a function that copies
 * the string pointed to by src.
 * @dest: argument passed
 * @src: argument passed
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;

	return (aux);
}
