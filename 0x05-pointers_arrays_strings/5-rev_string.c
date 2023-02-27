#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = *s - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
