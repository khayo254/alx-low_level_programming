#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number
 * @n: last digit
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit

	last_digit = n % 10;

	_putchar(last_digit +'0');

	return (last_digit);
}

