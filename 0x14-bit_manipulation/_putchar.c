#include "main.h"
#include <unistd.h>
/**
 * _putchar - this  writes the character c to stdout
 * @c: this is the character to print
 *
 * Return:  this is to On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

