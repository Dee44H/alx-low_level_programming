#include"main.h"

/**
 * _strchr - locates a character in a string
 * @s: source string
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x])
	{
		x++;
	}

	for (y = 0; y <= x; y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}

	return ('\0');
}
