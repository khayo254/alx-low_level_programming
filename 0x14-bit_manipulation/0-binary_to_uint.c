#include "main.h"

/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: unsigned int value, or 0 if the string contains other characters
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	/* check if parametre is valid */
	if (b == NULL)
		return (0);

	/* loop over every character in the string */
	for (int i = 0; b[i] != '0'; i++)
	{
		/* check if b is 0 or 1 */
		if (b[i] == '0' || b[i] == '1')
		{
			n = n * 2 + (b[i] - '0');
		}
	}
	return (n);
}
