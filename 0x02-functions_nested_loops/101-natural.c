#include <stdio.h>

/**
 * main - function prints the sum of all multiples
 * of 5 and 3 from 0 to 1024.
 *
 * Return: 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; 1 < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
