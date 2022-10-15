#include <stdio.h>

/**
 * main - loops a certain variable
 *
 * Description: this program print all the
 * values of base16 to standard output
 * Return: base
 */
int main(void)
{
	int base;
	char sexteen;

	for (base = '0'; base <= '9'; base++)
		putchar(base);

	for (sexteen = 'a'; sexteen <= 'f'; sexteen++)
		putchar(sexteen);

	putchar('\n');

	return (0);
}
