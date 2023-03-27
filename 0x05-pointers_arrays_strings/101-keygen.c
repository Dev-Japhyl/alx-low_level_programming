#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0
*/

int main(void)
{
	int c, sum, total;

	srand(time(NULL));
	for (sum = 0, total = 2772; total > 122; sum ++)
	{
		c = (rand() % 128) + 1;
		printf("%c", c);
		total -= c;
	}
	printf("%c", total);

	return (0);
}

