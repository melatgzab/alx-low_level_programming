#include "main.h"
/**
 * swap_int - swap the values of two integer
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

