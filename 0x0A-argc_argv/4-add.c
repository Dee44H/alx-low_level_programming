#include<stdio.h>
#include "main.h"
#include<stdlib.h>

/**
 * main - prints the result of addition of positve numbers
 * @argc: Argument counter
 * @argv: Arguemt vector of array size argc
 *
 * Return: Always 0'
 */
int main(int argc, char *)
{
	int sum, i;

	sum = 0;
	i = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			{
				sum = sum + atoi(argv[i]);
				printf("%d\n", sum);

			}
	else (argc == 1)
	{
	printf("0\n");
	}
	}
	return 0;
}




