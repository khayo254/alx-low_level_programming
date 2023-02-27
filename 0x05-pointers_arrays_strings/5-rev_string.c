#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int i, j;
	char temp = s[0];

	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
