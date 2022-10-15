#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: the function main prints every combination
 * of two digit numbers
 * Return: 0
 */
int main(void)
{
	int n, u;

	for (n = '0'; n < '9'; n++)
	{
		for (u = n + 1; u <= '9'; u++)
		{
			if (u != n)
			{
				putchar(n);
				putchar(u);

				if (n == '8' && u == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
