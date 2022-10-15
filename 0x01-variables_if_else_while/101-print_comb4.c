#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: the function main print every combination
 * of three digit numbers without repetition
 * Return: 0
 */

int main(void)
{
	int d, n, u;

	for (d = '0'; d < '8'; d++)
	{
		for (n = d + 1; n < '9'; n++)
		{
			for (u = n + 1; n <= '9'; u++)
			{
				if ((d != n) != u)
				{
					putchar(d);
					putchar(n);
					putchar(u);

					if (d == '7' && n == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
