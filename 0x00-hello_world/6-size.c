#include <stdio.h>

/**
 * main - prints size of datatypes
 *
 * Description: this function prints out the size of the
 * various datatypes to standard output
 * Return: Always 0
 */
int main(void)
{
	char e;
	int i;
	long int d;
	long long int k;
	float a;

	printf("Size of a char: %lu\n", (unsigned long)sizeof(e));
	printf("Size of an int: %lu\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu\n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu\n", (unsigned long)sizeof(a));

return (0);
}
