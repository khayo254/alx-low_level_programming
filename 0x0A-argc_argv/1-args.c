#include <stdio>
#include "main.h"

/**
 * main - print number of arguments passed to the program
 * @argc: number of argumets
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
