#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: input string
 * Return: String in reverse
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
