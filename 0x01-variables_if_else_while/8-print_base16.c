#include <stdio.h>

/**
 * main - loops a certain variable
 *
 * Description: this program print all the 
 * values of base16 to standard output
 * Return: base
 */
int main() 
{
	char base;

	for (base = '0'; base <= 'f'; base++)
	putchar("%x");

	putchar(base);

	putchar('\n');

	return (base);
}
