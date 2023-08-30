#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes - the character c to stdout
 * @c: The character to print
 *
 * Return: on success1.
 * On error, -1 returned, and erro is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
