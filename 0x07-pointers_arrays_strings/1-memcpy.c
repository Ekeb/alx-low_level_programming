/*
 *File: 1-memcpy.c
 *
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * _memcpy - A funcion that copies memory area
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;

	}
	return (dest);
}
