#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program to print last digit of a random number
* Description: this program prints the last digit of a random number
* then determines if the digit is either greater the 5 OR is 0 OR 
* is less than 6 and not 0
* Return: 0
*/

int main(void)
{

	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (1 > 5)
	{
		printf("Last digit of %d is %d and is greater then 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
	}
