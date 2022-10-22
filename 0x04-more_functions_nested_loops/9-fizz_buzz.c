#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints numbers 1 to 100
 * but prints fizz for multiples of three,
 * buzz for multiples of 5 and fizz buzz
 * for multiples of 3 and 5.
 *
 * Return: 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && 1 % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (1 % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
