#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: argument passed
 * @b: argument passed
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int pot;

	pot = *a;
	*a = *b;
	*b = pot;
}
