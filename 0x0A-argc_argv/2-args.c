#include<stdio.h>
#include"main.h"


/**
 * main - program that prints all arguments it receives
 * @argc: Argument count
 * @argv: argument vector of size argc
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
