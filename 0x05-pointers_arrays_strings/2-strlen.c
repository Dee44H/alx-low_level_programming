#include"main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0';)
	{
		i++;
	}

	return (i);
}
