#include "main.h"

/**
 * _strncpy - Entry poin
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n &&src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
