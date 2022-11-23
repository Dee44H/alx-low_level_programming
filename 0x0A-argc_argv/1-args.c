#include<stdio.h>
#include"main.h"

/**
 * main - program that prints the number of arguments passed
 * @argc: Argument count
 * @argv: Argument vector of size argc
 *
 * Return: 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
