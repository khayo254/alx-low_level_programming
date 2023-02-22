#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number to be treated
 *
 * Return: number matrix
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(i + '0');
			_putchar('x');
			_putchar(j + '0');
			_putchar('=');
			_putchar((i * j) / 10 + '0');
			_putchar((i * j) % 10 + '0');
			_putchar('\n');
		}
	}
}
