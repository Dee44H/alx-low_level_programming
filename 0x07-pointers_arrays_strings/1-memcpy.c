#include"main.h"

/**
 * _memcpy - copies bytes frome memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes from memory area that is to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}

	return (dest);
}
