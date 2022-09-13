#include <stdio.h>

/**
 * main - loops a certain variable
 *
 * Description: This code prints the numbers of
 * base ten using the putchar function
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);

	putchar('\n');

	return (i);
}
