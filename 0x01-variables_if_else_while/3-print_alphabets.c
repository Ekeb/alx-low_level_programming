#include <stdio.h>

/**
 *main - print the alphabet in lowercase and upper
 *
 *description: Will print out the entire alphabet in lowercase, then in upper
 *Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
