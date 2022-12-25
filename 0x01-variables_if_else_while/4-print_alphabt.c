#include <stdio.h>

/**
 *main - print the alphabet in lowercase
 *
 *description: Will print out the entire alphabet in lowercase
 *Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{	
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
