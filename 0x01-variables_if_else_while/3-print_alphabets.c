#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains a piece of code that executes a couple of loops
 *
 * Description: the function main prints the letter of the alphabet in
 * lowercase then in uppercase to standard output using for loops
 * Return: 0
 */
int main(void)
{
	int lalpha;

	for (lalpha = 'a'; lalpha <= 'z'; lalpha++)
	putchar(lalpha);

	for (lalpha = 'A'; lalpha <= 'Z'; lalpha++)
	putchar(lalpha);

	putchar('\n');
	return (0);
}
