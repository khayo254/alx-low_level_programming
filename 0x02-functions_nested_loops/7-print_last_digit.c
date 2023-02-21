#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number
 * @n: last digit
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	_putchar((n % 10) + '0');

	return (n % 10);
}
