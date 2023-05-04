#include "main.h"

/**
 * get_bit - Function to get the value of a bit at given index
 * @n: An unsigned long int value
 * @index: The position of the bit, starting from 0
 *
 * Return: The value of the bit at index index, or -1 if an error occured
 * (bit_val)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
