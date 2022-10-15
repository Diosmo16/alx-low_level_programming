#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains a piece of code that executes a loop
 *
 * Description: the function main prints the alphabet in
 * lowercase using a for loop whilw ommiting letters q & e
 * Return: 0
 */

int main(void)
{
	char lalpha, e, q;

	e = 'e';
	q = 'q';

	for (lalpha = 'a'; lalpha <= 'z'; lalpha++)
	{
		if (lalpha != e && lalpha != q)
			putchar(lalpha);
	}

	putchar('\n');

	return (0);
}
