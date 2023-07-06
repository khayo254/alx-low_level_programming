#include "main.h"

/**
 * binary_to_uint - function to convert binary to unsigned int
 * @r: pointer to a string of 0 and 1 characters
 *
 * Return: unsigned int value, or 0 if the string contains other characters
 */
unsigned int binary_to_uint(const char *r)
{
	int i;
	unsigned int dec_val = 0;

	if (!r)
	{
			return (0);
	}

	for (i = 0; r[i]; i++)
	{
		if (r[i] < '0' || r[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (r[i] - '0');
	}

	return (dec_val);
}
