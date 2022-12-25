#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - prints single digit numbers of base 10
 *description: Will print out base 10's single digit numbers
 *Return: 0
 */

int main(void)
{
	char c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar ('\n');
	return (0);
}
