#include "main.h"
/**
 * _isalpha - 1 if lower or upper case
 * @c: the character to be checked
 *
 * Return: 1 lower or upper and 0 other wise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

