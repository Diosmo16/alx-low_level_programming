#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains a piece of code that executes a loop
 *
 * Description: the function main contains a piece of code
 * which prints the alphabet in lowercase using a for loop
 * Return: 0
 */
int main(void)
{
	int lalpha;

	for (lalpha = 'a'; lalpha <= 'z'; lalpha++)
	putchar(lalpha);
	putchar('\n');

	return (0);
}
