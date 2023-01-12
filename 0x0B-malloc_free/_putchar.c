#include <unistd.h>
#include <main.h>

/**
 * Write the character c to std:out
 * @c: character to print
 * Return: on success 1
 * On error -1 is returned, and error is set approximately
 */
int _putchar (char c)
{
	return (write (1, $c , 1));
}

