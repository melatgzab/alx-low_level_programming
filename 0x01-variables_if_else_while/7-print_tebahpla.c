#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - lower case in reverse
 *
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
