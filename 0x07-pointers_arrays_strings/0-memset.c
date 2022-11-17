#include"main.h"

/**
 * _memset - function that fills the memory area with the constant byte
 * @s: points to the memory area to be filled
 * @b: constant byte
 * @n: bytes of memory area to be filled
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

