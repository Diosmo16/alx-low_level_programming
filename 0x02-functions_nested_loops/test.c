#include <stdio.h>

int p(void);

int main(void) {
	p();
	return (0);
}

int p(void) {
	int r;
	int s;
	int d;
	int j;

	for (r = '0'; r < '3'; r++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			if (r == '2' && s == '4')
				break;

			for (d = '0'; d < '6'; d++)
			{
				for (j = '0'; j <= '9'; j++)
				{
					putchar(r);
					putchar(s);
					putchar(':');
					putchar(d);
					putchar(j);
					putchar('\n');
				}
			}
		}
	}
}
