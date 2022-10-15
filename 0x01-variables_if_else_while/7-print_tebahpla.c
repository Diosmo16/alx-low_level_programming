#include <stdio.h>

/**
 * main - loops a certain variable
 *
 * Description: this code prints the alphabet
 * in a descending order i.e. from 'z' to 'a'
 * Return: alpha
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	putchar(alpha);

	putchar('\n');

	return (0);
}
