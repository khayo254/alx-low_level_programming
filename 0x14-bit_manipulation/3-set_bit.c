#include "main.h"

/**
 * set_bit - Function that will set the bit of a given index to be 1
 * @n: pointer to the number
 * @index: index of the bit to be set from 0
 *
 * Return: REturn 1 if successful, and -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
