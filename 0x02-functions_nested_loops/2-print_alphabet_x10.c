#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; letter++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
