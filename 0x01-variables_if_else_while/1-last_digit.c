#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit using else if
 *
 * Return: always 0
 */

int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n  > 5)
	{
	printf("Last digit of %d is %d and greater than 5\n", n);
	}
	else if (n < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	else
	{
	printf("Last digit of %d is %D and is 0\n", n);
	}

	return (0);
}
