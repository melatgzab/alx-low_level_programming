#include <unistd.h>
/**
 * _putchar - write c to stdout
 *
 * Return: on sucess 1 
 * on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
