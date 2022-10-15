#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints combination of single numbers
 *
 * Description: the function main print all combinations of
 * single digit numbers seperated by ' ' and ',' to standard
 * output
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= 9; n++)
	{
		putchar(n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
